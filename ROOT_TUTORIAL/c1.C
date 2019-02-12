void c1()
{
//=========Macro generated from canvas: c1/Feynam Diagram
//=========  (Sun Sep 23 19:19:30 2018) by ROOT version6.10/08
   TCanvas *c1 = new TCanvas("c1", "Feynam Diagram",347,25,400,715);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   TLine *line = new TLine(0,1,0.5,0.5);
   line->SetLineColor(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(0.5,0.5,1,1);
   line->SetLineColor(2);
   line->SetLineWidth(3);
   line->Draw();
   TCurlyLine *curlyline = new TCurlyLine(0.5,0.5,0.5,0,0.04,0.01);
   curlyline->SetWavy();
   curlyline->SetLineWidth(3);
   curlyline->Draw();
   curlyline = new TCurlyLine(0.2311558,0.76783,0.7688442,0.76783,0.04,0.01);
   curlyline->SetWavy();
   curlyline->SetLineWidth(3);
   curlyline->Draw();
   TArrow *arrow = new TArrow(0.1532663,0.9514416,0.2512563,0.8482549,0.04,"|>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(7);
   arrow->SetLineWidth(15);
   arrow->Draw();
   arrow = new TArrow(0.7160804,0.8254932,0.8316583,0.9286798,0.05,"|>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineColor(7);
   arrow->SetLineWidth(15);
   arrow->Draw();
   TLatex *   tex = new TLatex(0.5452261,0.5007587,"#gamma");
   tex->SetTextSize(0.07587253);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
