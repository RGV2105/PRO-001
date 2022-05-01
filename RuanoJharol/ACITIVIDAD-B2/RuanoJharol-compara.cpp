#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Escriba el primer numero: ";
	cin>>a;
	cout<<"Escriba el segundo numero: ";
	cin>>b;
	if(a==b){
		cout<<"Los numeros son  iguales";		
	}
	else if(a>b){
		cout<<"El numero mayor es: "<<a<<endl;
	}
	if(b>a){
		cout<<"El numero mayor es: "<<b<<endl;
	}
	return 0;
	}


