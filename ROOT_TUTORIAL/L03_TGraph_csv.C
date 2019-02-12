void L03_TGraph_csv(){

	TCanvas * c1 = new TCanvas("c1", "A simple Graph", 800, 800);

	// create a TGraph
	TGraph * gr = new TGraph("L03_data.csv", "%lg,%lg");
	gr->Draw("AC*");


}
