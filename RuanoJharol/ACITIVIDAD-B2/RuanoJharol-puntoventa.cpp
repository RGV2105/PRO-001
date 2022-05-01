#include <iostream>
using namespace std;
int main(){
	int a=0,x;
	float pg=0,p;
	float iva=0.15,des=0.12,IVA,DES,TPF;
	cout<<"Ingrese todos lo valores que desea sumar: ";
	cin>>x;
	do{
		cout<<"Ingrese el valor a sumar"<<a+1<<endl;
		cin>>p;
		a=a+1;
		pg=pg+p;
	}while (a<x);
		cout<<"El resultado final de la sumatoria es de: "<<pg<<endl;
	IVA=pg*iva;
	DES=pg*des;
	TPF=pg-DES+IVA;
	cout<<"El iva es de: "<<IVA<<"$"<<endl;
	cout<<"El descuento es de: "<<DES<<"$"<<endl;
	cout<<"El total a pagar final es de: "<<TPF<<"$"<<endl;
	return 0;
}

