void L10_TH1D(){

	//construct a 1D histogram	
	TH1D * h = new TH1D("h", "1D histogram", 10, -1, 1);
	//fill histogram with random Guassian number
	h->FillRandom("gaus", 10000);
	h->SetLineWidth(5);
	h->Draw();

}
