void L04_TGraphErrors(){

	TCanvas * c1 = new TCanvas("c1", "A simple Graph", 800, 800);
	c1->SetGrid();

	// create a TGraph
	TGraphErrors * gr = new TGraphErrors("L04_data.csv", "%lg,%lg,%lg,%lg");
	gr->SetMarkerSize(2);
	gr->SetMarkerColor(kRed);
	gr->SetMarkerStyle(8);
	gr->Draw("APL");


}
