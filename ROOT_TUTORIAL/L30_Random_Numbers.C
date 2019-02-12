#include <ctime>

void L30_Random_Numbers(){
	time_t tic,toc;

	TRandom3 my_rand;
	my_rand.SetSeed(0);

	TH1D * h = new TH1D("h","h",200,-2,2);
	for(Int_t i=0; i<10000000; ++i){
		h->Fill(my_rand.Gaus(0,2));
	}

	h->Draw();

	cout<<"===== compare  TRandom algorithms speed ====="<<endl;
	Int_t n = 10000000;
	TRandom1 my_rand_1;
	tic = time(0);
	for(Int_t i=0; i<n; i++){
		my_rand_1.Gaus(0,1);
	}
	toc = time(0);
	cout<<"TRandom1 time: "<<difftime(toc,tic)<<" seconds. "<<endl;

        TRandom2 my_rand_2;
        tic = time(0);
        for(Int_t i=0; i<n; i++){
                my_rand_2.Gaus(0,1);
        }
        toc = time(0);
        cout<<"TRandom2 time: "<<difftime(toc,tic)<<" seconds. "<<endl;

        TRandom3 my_rand_3;
        tic = time(0);
        for(Int_t i=0; i<n; i++){
                my_rand_3.Gaus(0,1);
        }
        toc = time(0);
        cout<<"TRandom3 time: "<<difftime(toc,tic)<<endl;




	TF1 * f = new TF1("population", "x*fabs(sin(x))",0,10);
	//f->Draw();
	TH1D * hf = new TH1D("hf","hf", 50, 0 , 10);

	for(Int_t i=0; i<10000; i++){
		hf->Fill(f->GetRandom());
	}
	hf->Draw();
}



