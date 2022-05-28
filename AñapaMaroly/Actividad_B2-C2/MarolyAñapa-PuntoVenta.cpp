//================================================
//==>Nombre del programa: la factura
//==>Archivo : MarolyAñapa-PuntoVenta.cpp
//==>Autor: Añapa Corozo Maroly Mayerli
//==>Fecha de elaboración: 2022-05-22
//==>Fecha ultima actualización: 2022-05-26
//=================================================

#include <iostream>
using namespace std;

int main(){
	int ma_r1=0,ma_r2;
	float ma_pg=0,ma_p;
	float ma_iv=0.15,ma_desc=0.12,ma_iva,ma_des,ma_totp;
	cout<<"Ingrese todos lo valores que desea sumar: ";
	cin>>ma_r2;
	do{
		cout<<"Ingrese el valor a sumar"<<ma_r1+1<<endl;
		cin>>ma_p;
		ma_r1=ma_r1+1;
		ma_pg=ma_pg+ma_p;
	}while (ma_r1<ma_r2);
		cout<<"El resultado final de la sumatoria es de: "<<ma_pg<<endl;
	ma_iva=ma_pg*ma_iv;
	ma_des=ma_pg*ma_desc;
	ma_totp=ma_pg-ma_des+ma_iva;
	cout<<"El iva es de: "<<ma_iva<<"$"<<endl;
	cout<<"El descuento es de: "<<ma_des<<"$"<<endl;
	cout<<"El total a pagar final es de: "<<ma_totp<<"$"<<endl;
	
	cout<<"//================================================"<<endl;
cout<<" //==>Nombre del programa:  una factura"<<endl;
cout<<"//==>Archivo : MarolyAñapa-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Añapa Corozo Maroly Mayerli"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";

return 0;
}
