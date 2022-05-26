//================================================
//==> Nombre del programa: Suma de varios numeros
//==> Archivo : RuanoJoseph-Suma.cpp
//==>Autor: Ruano Jama Joseph
//==>Fecha de elaboración: 2022-05-22
//==>Fecha ultima actualización: 2022-05-26
//=================================================
#include <iostream>
using namespace std;
int main(){
	int rj_r1=0, rj_r2; 
	float  rj_res=0, rj_r3;
	cout<<"Ingrese todos lo valores que desa sumar: ";
	cin>> rj_r2;
	do{
		cout<<"Ingrese el valor a sumar"<< rj_r1+1<<endl;
		cin>> rj_r3;
		 rj_r1= rj_r1+1;
		 rj_res= rj_res+ rj_r3;
	}while ( rj_r1< rj_r2);
		cout<<"El resultado  de su suma es : "<< rj_res<<endl;
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Suma de varios numeros"<<endl;
cout<<"//==>Archivo : RuanoJoseph-Suma.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";
		return(0);
}
