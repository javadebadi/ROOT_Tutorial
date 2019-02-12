void L01_TGraph(){

	TCanvas * c1 = new TCanvas("c1", "A simple Graph", 800, 800);
	Double_t x[100], y[100];
	Int_t n_points = 20;
	for( Int_t i = 0; i< n_points; ++i){
		x[i]=0.1*i;
		y[i]=i*i;
	}

	// create a TGraph
	TGraph * gr = new TGraph(n_points, x, y);
	gr->Draw("AC*");


}
