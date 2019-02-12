void L13_TH1D_Write(){
	//write a histogram to a root file
	TFile f("L13_hist.root","recreate");
	TH1D * h = new TH1D("histName", "Random Hist", 50, -2, 2);
	h->FillRandom("gaus",1000);
	h->Write();
	f.Close();

	

}
