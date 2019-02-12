{


	TH1D * h1 = new TH1D("h1","h1",50,-2,2);
	h1->SetFillColor(kRed);
	h1->FillRandom("gaus",20000);

        TH1D * h2 = new TH1D("h2","h2",50,-2,2);
	h2->SetFillColor(kGreen);
        h2->FillRandom("gaus",15000);

        TH1D * h3 = new TH1D("h3","h3",50,-2,2);
	h3->SetFillColor(kBlue);
        h3->FillRandom("gaus",10000);

	//create THStack Object
	THStack * hs = new THStack();
	hs->Add(h1);
	hs->Add(h2);
	hs->Add(h3);

	//crete TCanvas
	TCanvas * c = new TCanvas("c","c",1400,800);
	c->Divide(2,1);

	c->cd(1);
	hs->Draw();
	
	c->cd(2);
	hs->Draw("nostack");
	




}
