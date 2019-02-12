void L02_TGraph_data(){

	TCanvas * c1 = new TCanvas("c1", "A simple Graph", 800, 800);

	// create a TGraph
	TGraph * gr = new TGraph("L02_data.dat");
	gr->Draw("AC*");


}
