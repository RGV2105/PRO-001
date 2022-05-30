//================================================
//==> Nombre del programa: La edad de una persona
//==> Archivo : TafurIsaac-Laedad.cpp
//==>Autor: Isaac Alejandro Tafur León
//==>Fecha de elaboración: 2022-03-20
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include<iostream>
using namespace std;

int main(){
	int IS_aa,IS_an,IS_da,IS_dn,IS_edad,IS_ma,IS_mn;
	cout<<"ingrese su fecha actual"<<endl;
	cout<<"formato de dia, mes, año"<<endl;
		cin>> IS_da;
		cin>> IS_ma;
		cin>> IS_aa;	
	cout<<"ingrese su fecha de nacimiento"<<endl;
	cout<<"formato de dia, mes, año"<<endl;
		cin>> IS_dn;
		cin>> IS_mn;
		cin>> IS_an;
	
	IS_edad=IS_aa-IS_an;
	
	if(IS_ma<IS_mn){
		IS_edad=IS_edad-1;
	}
	else{
		if(IS_ma==IS_mn){
			if(IS_da<IS_dn)
			IS_edad=IS_edad-1;
			
		}
		else{
			if(IS_dn==IS_da){
				cout<<"felicidades es tu cumpleaños"<<endl;
			}
		}
	}
	if(IS_edad<0){
		cout<<"no se puede carcular la edad";
	}
		else{
			IS_edad=IS_edad-1;
			cout<<"tu edad es: "<<IS_edad<<endl;
		}

cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: la edad de una persona"<<endl;
cout<<"//==>Archivo : TafurIsaac-Laedad.cpp"<<endl;
cout<<"//==>Autor: Isaac Alejandro Tafur León"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";

	return 0;
}
