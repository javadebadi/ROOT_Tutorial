void L21_TTree(){
	//create a TFile
	TFile * f = new TFile("L21_TTree.root","recreate");
	//create a TTree
	TTree * t = new TTree("t", "tree");

	class Polar{
	public:
		Double_t r;
		Double_t theta;
	};
	
	Polar var;

	//add a branch to the tree with one leaf
	t->Branch("newBranch", &var, "radius/D:angle/D");

	for(Int_t i=0; i<5; i++){
		var.r = 2.0*i;
		var.theta = 0.5*i;
		t->Fill();
		t->Show(i);
	}

	
	f->Write();
	f->Close();


	


}
