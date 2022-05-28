//================================================
//==>Nombre del programa: suma de varios numeros
//==>Archivo : MarolyAñapa-SumaN.cpp
//==>Autor: Añapa Corozo Maroly Mayerli
//==>Fecha de elaboración: 2022-05-22
//==>Fecha ultima actualización: 2022-05-26
//=================================================

#include <iostream>
using namespace std;

int main(){

	int ma_a=0, ma_r; 
	float  ma_t=0, ma_v;
		cout<<"Ingrese todos lo valores que desa sumar: ";
		cin>> ma_r;
	do{
		cout<<"Ingrese el valor a sumar"<< ma_a+1<<endl;
		cin>> ma_v;
		 ma_a= ma_a+1;
		 ma_t= ma_t+ ma_v;
	}while ( ma_r>ma_a);
		cout<<"El resultado  de su suma es : "<< ma_t<<endl;


cout<<"//================================================"<<endl;
cout<<" //==>Nombre del programa:  la suma de varios numeros"<<endl;
cout<<"//==>Archivo : MarolyAñapa-Comparar.cpp"<<endl;
cout<<"//==>Autor: Añapa Corozo Maroly Mayerli"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";

return 0;
}
