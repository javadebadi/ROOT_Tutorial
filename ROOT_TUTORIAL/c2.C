void c2()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 30 10:25:28 2018) by ROOT version6.10/08
   TCanvas *c = new TCanvas("c", "c",420,25,700,715);
   c->Range(-0.125,-0.2625,1.125,2.3625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TF1 *pdf1 = new TF1("pdf","ROOT::Math::uniform_pdf(x,a,b)",0,1);
   pdf1->SetFillColor(19);
   pdf1->SetFillStyle(0);
   pdf1->SetLineColor(2);
   pdf1->SetLineWidth(2);
   pdf1->GetXaxis()->SetLabelFont(42);
   pdf1->GetXaxis()->SetLabelSize(0.035);
   pdf1->GetXaxis()->SetTitleSize(0.035);
   pdf1->GetXaxis()->SetTitleFont(42);
   pdf1->GetYaxis()->SetLabelFont(42);
   pdf1->GetYaxis()->SetLabelSize(0.035);
   pdf1->GetYaxis()->SetTitleSize(0.035);
   pdf1->GetYaxis()->SetTitleOffset(0);
   pdf1->GetYaxis()->SetTitleFont(42);
   pdf1->Draw("");
   
   TF1 *cdf2 = new TF1("cdf","ROOT::Math::uniform_cdf(x,a,b)",0,1);
   cdf2->SetFillColor(19);
   cdf2->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   cdf2->SetLineColor(ci);
   cdf2->SetLineWidth(2);
   cdf2->GetXaxis()->SetLabelFont(42);
   cdf2->GetXaxis()->SetLabelSize(0.035);
   cdf2->GetXaxis()->SetTitleSize(0.035);
   cdf2->GetXaxis()->SetTitleFont(42);
   cdf2->GetYaxis()->SetLabelFont(42);
   cdf2->GetYaxis()->SetLabelSize(0.035);
   cdf2->GetYaxis()->SetTitleSize(0.035);
   cdf2->GetYaxis()->SetTitleOffset(0);
   cdf2->GetYaxis()->SetTitleFont(42);
   cdf2->Draw("same");
   
   Double_t Graph0_fx1[5] = {
   0.95,
   0.95,
   1,
   1,
   0.95};
   Double_t Graph0_fy1[5] = {
   0,
   1,
   1,
   0,
   0};
   TGraph *graph = new TGraph(5,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(3001);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.945,1.005);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.1);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("f");
   
   TPaveText *pt = new TPaveText(0.15,0.9341952,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("ROOT::Math::uniform_pdf(x,a,b)");
   pt->Draw();
   TLatex *   tex = new TLatex(0.9315903,0.4425455,"0.05");
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
   c->ToggleToolBar();
}
