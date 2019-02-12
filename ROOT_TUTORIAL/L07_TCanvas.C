void L07_TCanvas(){
	
	TCanvas * c = new TCanvas("c1","Multi Canvas",1400,800);
	c->Divide(2,2);

	//open first canvas
	c->cd(1);
	TF1 * f1 = new TF1("f1","x",0,1);
	f1->Draw();

        //open second canvas
        c->cd(2);
        TF1 * f2 = new TF1("f2","sin(x)",0,1);
        f2->Draw();

        //open third canvas
        c->cd(3);
        TF1 * f3 = new TF1("f3","cos(x)",0,1);
        f3->Draw();

        //open fourth canvas
        c->cd(4);
        TF1 * f4 = new TF1("f4","TMath::Exp(x)",0,1);
        f4->Draw();




	
}
