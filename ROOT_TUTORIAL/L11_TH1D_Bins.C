void L11_TH1D_Bins(){
	//define number of bins
	const Int_t NBins = 6;
	Double_t Edges[NBins+1] = {-2.0,-1.0,-0.5,0.0,0.5,1,2};

	TCanvas * c1 = new TCanvas("c1","non-uniform Bins");
	//create a histograms
	TH1D * h = new TH1D("h","Histogram with non-uniform Bins", NBins, Edges);
	h->FillRandom("gaus",10000);
	h->Draw();

	//Get Contents of the bins
	for(Int_t i = 0; i<=NBins+1; ++i){
		printf("Bin Content in %d th Bin = %lg \n",i,h->GetBinContent(i));
	}

	//change the content of the bin
	TCanvas * c2 = new TCanvas("c2","SetBinContent");
	TH1D * h2 = new TH1D(*h);
	h2->SetBinContent(1,6000);
	h2->Draw();

}
