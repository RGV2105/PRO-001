#include <iostream> 
using namespace std;
int main(){
	float r1,r2,r;
	cout<<"Ingrese su Fecha de nacimiento: ";
	cin>>r1;
	cout<<"Ingrese el ano actual:";
	cin>>r2;
	r=(r1-r2);
	cout<<"Su Edad es: "<<r<<endl;
	return 0;	
}
