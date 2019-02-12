{
	const Int_t NBins = 6;

	//create a histogram for population
	TCanvas * c1 = new TCanvas("c1", "population",700,700);
	TH1D * population = new TH1D("population", "STN Population", NBins, -2,2);
	population->FillRandom("gaus",1000);
	population->Draw();
	
	//create a histogram by sampling random numbers from another TH1D
	TCanvas *c2 = new TCanvas("c2" , "sample" , 700, 700);
	TH1D * sample = new TH1D("smaple", "sample histgoram", NBins, -2, 2);
	for(Int_t i=0; i<10000; i++){
		Double_t rand = population->GetRandom();
		cout<<rand<<endl;
		sample->Fill(rand);
	}
	sample->Draw();

}
