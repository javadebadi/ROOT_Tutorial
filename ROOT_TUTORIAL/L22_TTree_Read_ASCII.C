void L22_TTree_Read_ASCII(){

	class par{
	public:
		Int_t id;
		Float_t mass;
		Double_t momentum[3];

	};

	par obj;

	//create a TFile and TTree
	TFile * f = new TFile("L22_TTree_Read_ASCII.root","recreate");
	TTree * t = new TTree("particle","particle information");


	// add a new branch to the tree
	t->Branch("lepton", &obj, "id/I:mass/F:momentum[3]/D");

	//read data from an ASCII file and fill tree with that data
	FILE * fp = fopen("L22_TTree_Read_ASCII.csv","r");
	char line[1001];
	Int_t nlines = 0;

	while(fgets(line,1000,fp)){
		sscanf(line,
			"%d,%f,%lg,%lg,%lg"
			,&obj.id
			,&obj.mass
			,&obj.momentum[0]
			,&obj.momentum[1]
			,&obj.momentum[2]
		);
		cout<<obj.id<<","
			<<obj.mass<<","
			<<obj.momentum[0]<<","
			<<obj.momentum[1]<<","
			<<obj.momentum[2]<<endl;
		t->Fill();
		nlines++;
	}

	cout<<"# of lines in ASCII file = "<<nlines<<endl;
	
	cout<<"===== Tree is filled =========="<<endl;
	// a loop to print inforamtion of the tree in the screen
	for(Int_t i=0; i<t->GetEntriesFast() ; i++){

		t->Show(i);
	}

	f->Write(); 

	fclose(fp);
	f->Close();


}
