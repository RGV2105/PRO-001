//================================================
//==> Nombre del programa: Ingresar x cantidad de productos y calcular, iva, descuento,total a pagar.
//==> Archivo : RuanoJoseph-PuntoVenta.cpp
//==>Autor: Ruano Jama Joseph
//==>Fecha de elaboración: 2022-05-22
//==>Fecha ultima actualización: 2022-05-26
//=================================================
#include <iostream>
using namespace std;
int main(){
	int rj_r1=0,rj_r2;
	float rj_pg=0,rj_p;
	float rj_iv=0.15,rj_desc=0.12,rj_iva,rj_des,rj_totp;
	cout<<"Ingrese todos lo valores que desea sumar: ";
	cin>>rj_r2;
	do{
		cout<<"Ingrese el valor a sumar"<<rj_r1+1<<endl;
		cin>>rj_p;
		rj_r1=rj_r1+1;
		rj_pg=rj_pg+rj_p;
	}while (rj_r1<rj_r2);
		cout<<"El resultado final de la sumatoria es de: "<<rj_pg<<endl;
	rj_iva=rj_pg*rj_iv;
	rj_des=rj_pg*rj_desc;
	rj_totp=rj_pg-rj_des+rj_iva;
	cout<<"El iva es de: "<<rj_iva<<"$"<<endl;
	cout<<"El descuento es de: "<<rj_des<<"$"<<endl;
	cout<<"El total a pagar final es de: "<<rj_totp<<"$"<<endl;
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Ingresar x cantidad de productos y calcular, iva, descuento,total a pagar."<<endl;
cout<<"//==>Archivo : RuanoJoseph-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";
	return 0;

}
