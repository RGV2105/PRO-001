//================================================
//==> Nombre del programa: Suma de varios numeros
//==> Archivo : TafurIsaac-SumaN.cpp
//==>Autor: Isaac Alejandro Tafur León
//==>Fecha de elaboración: 2022-03-20
//==>Fecha ultima actualización: 2022-05-18
//=================================================
#include<iostream>
using namespace std;

int main(){
	
	int IS_i=0,IS_a,IS_s;
	cout<<"cuantos numeros va a sumar"<<endl;
	cin>>IS_i;

	do {
		
	cout<< "cual es el numero q vas a sumar:"<<endl;
		cin>>IS_a;
		IS_s=IS_s+IS_a;
		IS_i--;
	}while(IS_i>0);
		
	cout<<"el resultado de la suma es: " <<IS_s<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: La comparacion de 2 numeros"<<endl;
cout<<"//==>Archivo : TafurIsaac-SumaN.cpp"<<endl;
cout<<"//==>Autor: Isaac Alejandro Tafur León"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";
	
	return 0;
}
