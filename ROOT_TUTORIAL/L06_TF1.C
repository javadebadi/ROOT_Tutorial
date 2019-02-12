void L06_TF1(){

	//canvas 1
	TCanvas * c1 = new TCanvas();
	//first method to define a fucntion
	TF1 * f1 = new TF1("f1","sin(x)/x", 0,3);
	f1->Draw();

	double x0 = 0.001;
	double fx0 = f1->Eval(0.001);//Evaluate the value of f1 in point x0
	printf("The value of f1 at point x0 is:   f1(%lg) = %lg \n",x0,fx0);
	double integrated =f1->Integral(0,2);//Integrate f1 from 0 to 2
	printf("The integral of f1 between 0 and 2        = %lg\n", integrated);

	//canvas 2
	TCanvas * c2 = new TCanvas();
        //second method to define a fucntion
        TF1 * f2 = new TF1("f2","[0]*x + [1]", 0,3);
	f2->SetParName(0,"slope");//set the name of [0] parameter to slope
	f2->SetParameter("slope",2);
	f2->SetParameter(1,5);//set the value of [1] parameter to 5
        f2->Draw();

	//canvas 3
	TCanvas * c3 = new TCanvas();
	//third method to define a function
	TF1 * f3 = new TF1("f3","TMath::Log(x)",1,2);
	f3->Draw();


}
