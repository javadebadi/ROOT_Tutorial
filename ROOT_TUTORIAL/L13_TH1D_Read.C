{

        //read a histogram from a root file
        TFile f1("L13_hist.root");
        TH1D * h1 = (TH1D*)f1.Get("histName");
        h1->SetLineWidth(5);
        h1->SetLineColor(kBlack);
        h1->Draw();


}
