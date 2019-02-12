{

	class par{
	public:
		Int_t id;
		Float_t mass;
		Double_t momentum[3];
	};

	par obj;


	//create a TFile and a TTree
	TFile * f = new TFile("L22_TTree_Read_ASCII.root");
	TTree * t = (TTree*)f->Get("particle");


	//find number of entries in tree
	Int_t nentries = t->GetEntriesFast();
	cout<<"# of events = "<<nentries<<endl;


	//create a branch to read only a small part of the whole tree
	TBranch * b_lepton = t->GetBranch("lepton");
	b_lepton -> SetAddress(&obj);



	//print
	for(Int_t i=0; i<nentries; ++i){
		//t->GetEntry(i);
		b_lepton->GetEntry(i);
		cout<<i<<"th event id ="<<obj.id<<endl;
		Int_t Msquared = obj.momentum[0] + obj.momentum[0]+
					obj.momentum[1]*obj.momentum[1]+
					obj.momentum[2]*obj.momentum[2];
		cout<<"Momentum Squareds = "<<Msquared<<endl;

	}

}
