#include <iostream>
using namespace std;
int main(){
	int r1=0, r2; 
	float  res=0, r3;
	cout<<"Ingrese todos lo valores que desa sumar: ";
	cin>> r2;
	do{
		cout<<"Ingrese el valor a sumar"<< r1+1<<endl;
		cin>> r3;
		 r1= r1+1;
		 res= res+ r3;
	}while ( r1< r2);
		cout<<"El resultado final de su suma es : "<< res<<endl;
		return 0;
	}
