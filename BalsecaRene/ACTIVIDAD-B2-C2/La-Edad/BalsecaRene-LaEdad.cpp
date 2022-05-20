//================================================
//==> Nombre del programa: La edad de una persona
//==> Archivo : ReneBalseca_PuntoVenta.cpp
//==>Autor: Carlos Rene Balseca Nevarez
//==>Fecha de elaboración: 2022-03-20
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include<iostream>
using namespace std;

int main(){
	int RB_aa,RB_an,RB_da,RB_dn,RB_edad,RB_ma,RB_mn;
	cout<<"ingrese su fecha actual"<<endl;
	cout<<"formato de dia, mes, año"<<endl;
		cin>> RB_da;
		cin>> RB_ma;
		cin>> RB_aa;	
	cout<<"ingrese su fecha de nacimiento"<<endl;
	cout<<"formato de dia, mes, año"<<endl;
		cin>> RB_dn;
		cin>> RB_mn;
		cin>> RB_an;
	
	RB_edad=RB_aa-RB_an;
	
	if(RB_ma<RB_mn){
		RB_edad=RB_edad-1;
	}
	else{
		if(RB_ma==RB_mn){
			if(RB_da<RB_dn)
			RB_edad=RB_edad-1;
			
		}
		else{
			if(RB_dn==RB_da){
				cout<<"felicidades es tu cumpleaños"<<endl;
			}
		}
	}
	if(RB_edad<0){
		cout<<"no se puede carcular la edad";
	}
		else{
			RB_edad=RB_edad-1;
			cout<<"tu edad es: "<<RB_edad<<endl;
		}

cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: la edad de una persona"<<endl;
cout<<"//==>Archivo : ReneBalseca_PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";

	return 0;
}
