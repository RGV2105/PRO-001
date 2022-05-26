#include <iostream>
using namespace std;

int main(){
	int r1,r2;
	cout<<"Ingrese el primer numero: ";
	cin>>r1;
	cout<<"Ingrese el segundo numero: ";
	cin>>r2;
	if(r1==r2){
		cout<<"Los numeros son  iguales";		
	}
	else if(r1>r2){
		cout<<"El numero mayor es: "<<r1<<endl;
	}
	if(r2>r1){
		cout<<"El numero mayor es: "<<r2<<endl;
	}
return 0;
}
