#include <iostream>
using namespace std;
int main(){
	int r1=0,r2;
	float pg=0,p;
	float iv=0.15,desc=0.12,iva,des,totp;
	cout<<"Ingrese todos lo valores que desea sumar: ";
	cin>>r2;
	do{
		cout<<"Ingrese el valor a sumar"<<r1+1<<endl;
		cin>>p;
		r1=r1+1;
		pg=pg+p;
	}while (r1<r2);
		cout<<"El resultado final de la sumatoria es de: "<<pg<<endl;
	iva=pg*iv;
	des=pg*desc;
	totp=pg-des+iva;
	cout<<"El iva es de: "<<iva<<"$"<<endl;
	cout<<"El descuento es de: "<<des<<"$"<<endl;
	cout<<"El total a pagar final es de: "<<totp<<"$"<<endl;
	return 0;
}
