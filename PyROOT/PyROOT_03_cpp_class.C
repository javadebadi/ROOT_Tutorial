#include <cstring>
class PyROOT_03_cpp_class{
	public:
	Double_t a;
	Double_t b;
	string title="cpp_class";
	PyROOT_03_cpp_class(Double_t x, Double_t y){
		this->a = x;
		this->b = y;
	}
	Double_t add(){return a+b;};
	string get_title(){
		return title;
	}


};
