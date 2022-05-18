//================================================
//==> Nombre del programa: Suma de varios numeros
//==> Archivo : ReneBalseca_SumaN.cpp
//==>Autor: Carlos Rene Balseca Nevarez
//==>Fecha de elaboración: 2022-03-20
//==>Fecha ultima actualización: 2022-05-18
//=================================================
#include<iostream>
using namespace std;

int main(){
	
	int RB_i=0,RB_a,RB_s;
	cout<<"cuantos numeros va a sumar"<<endl;
	cin>>RB_i;

	do {
		
	cout<< "cual es el numero q vas a sumar:"<<endl;
		cin>>RB_a;
		RB_s=RB_s+RB_a;
		RB_i--;
	}while(RB_i>0);
		
	cout<<"el resultado de la suma es: " <<RB_s<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: La comparacion de 2 numeros"<<endl;
cout<<"//==>Archivo : ReneBalseca_SumaN.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";
	
	return 0;
}
