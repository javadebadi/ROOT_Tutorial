{



class quantile_draw{

public:
	TString pdf_string;
	TF1 * pdf = new TF1("pdf", pdf_string);
	TF1 * cdf;
	quantile_draw(TString pdf_s): pdf_string(pdf_s){
	};

	};


	quantile_draw working("ROOT::Math::uniform_pdf(x,a,b)");

	//TString pdf_string = "ROOT::Math::uniform_pdf(x,a,b)";
	//TString cdf_string = "ROOT::Math::uniform_cdf(x,a,b)";
	//TCanvas * c = new TCanvas("c","c", 700,700);
	//const Double_t xmin = 0;
	//const Double_t xmax = 1;
	//const Double_t params[] = {0,1};
	//Double_t quan = 0.95;
	//TF1 * pdf = new TF1("pdf", pdf_string, xmin , xmax );
        //TF1 * cdf = new TF1("cdf", cdf_string, xmin , xmax );
//	pdf->SetParameters(params);


//	cdf->SetParameters(params);
//	cdf->SetLineColor(kBlue);

//        pdf->Draw();
//	cdf->Draw("same");


//	Double_t x = ROOT::Math::uniform_quantile(quan,);
//	Double_t y = ROOT::Math::uniform_pdf(x,xmin,xmax);
//	static const Int_t n=5;
//	Double_t x2[n] = {x,x,xmax,xmax,x};
//	Double_t y2[n] = {0,y,pdf->Eval(x),0,0};


//	TGraph * gr = new TGraph(n, x2, y2);

//	gr->SetLineWidth(5);
//	gr->SetLineColor(kBlack);
  //   	gr->SetFillColor(kBlack);
  //      gr->SetFillStyle(3001);
//
//	gr->Draw("sameF");
//
//	cout<<pdf->Integral(x,xmax)<<endl;

  // 	TLatex *   tex = new TLatex((x+xmax)/2,y/2,"0.05");
   //	tex->SetLineWidth(2);
   //	tex->Draw();

	


}
