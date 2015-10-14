#include <iostream>
#include <iomanip>
using namespace std;

double root3(int b){
	double a=b;
	double ret=0;
	while((ret-a>0.00001)||(ret-a)<-0.00001){
		ret = a;
		a = ((ret*2)+(b/ret/ret))/3;
	}
	return ret;
}

int main( int argc, char* argv[] ){
	cout << "The name used to start the program: " << argv[ 0 ]
		<< "\nArguments are:\n";
	for (int n = 1; n < argc; n++)
		cout << setw( 2 ) << n << ": " << argv[ n ] << '\n';
		int a;
		a = 125;
		std::cout<<"root3("<<a<<")="<<root3(a)<<"\n";
		a = 64;
		std::cout<<"root3("<<a<<")="<<root3(a)<<"\n";
		a = 27;
		std::cout<<"root3("<<a<<")="<<root3(a)<<"\n";
		a = 8;
		std::cout<<"root3("<<a<<")="<<root3(a)<<"\n";
	return 0;
}
