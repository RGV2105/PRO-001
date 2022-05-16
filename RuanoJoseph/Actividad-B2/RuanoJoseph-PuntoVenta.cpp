//================================================
//==>Nombre del programa: Comprar productos sacar iva y descuento y total
//==>Archivo : RuanoJoseph-PuntoVenta.cpp
//==>Autor: Ruano Jama Joseph
//==>Fecha de elaboración: 2022-04-22
//==>Fecha ultima actualización: 2022-05-16
//=================================================


#include <iostream>
using namespace std;
int main(){
	float rj_n1,rj_n2,rj_iv=0,rj_des=0,rj_tp=0,rj_pro=0,rj_topa=0;
	cout<<"Igresar el valor de primer productos:";
	cin>>rj_n1;
	cout<<"Ingrese el valor del segundo producto: ";
	cin>>rj_n2;
	rj_pro=(rj_n1+rj_n2);
	rj_iv=rj_pro*0.12;
	rj_tp=rj_pro+rj_iv;
	rj_des=rj_tp*0.10;
	rj_topa=rj_tp-rj_des;
	cout<<"El iva de su compra es: "<<rj_iv<<endl;
	cout<<"El descuento de su compra es: "<<rj_des<<endl;
	cout<<"El total a pagar de su compra es: "<<rj_topa<<endl;

cout<<"//================================================"<<endl;
cout<<" //==> Nombre del programa: Compra de Productos sacar iva y descuento y total"<<endl;
cout<<"//==> Archivo : RuanoJoseph-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-16"<<endl;
cout<<"//=================================================";
	return 0;
}
