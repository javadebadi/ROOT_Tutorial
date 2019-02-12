{
	//create a TFile
	TFile * f = new TFile("L20_TTree.root","recreate");
	//create a TTree
	TTree * t = new TTree("t", "tree");

	Int_t var;
	//add a branch to the tree with one leaf
	t->Branch("newBranch", &var, "intVariable/I");

	for(Int_t i=0; i<5; i++){
		var = 2*i;
		t->Fill();
	}

	f->Write();
	f->Close();


	


}
