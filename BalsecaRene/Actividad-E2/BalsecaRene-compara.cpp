//================================================
//==> Nombre del programa: La comparacion de 2 numeros
//==> Archivo : ReneBalseca_compara.cpp
//==>Autor: Carlos Rene Balseca Nevarez
//==>Fecha de elaboración: 2022-03-20
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include <iostream>
using namespace std;

int main(){
	int RB_a,RB_b; 
 
	cout<< "que numero vas a comparar"<<endl;
	cin>>RB_a;
	cin>>RB_b;
	if(RB_a==RB_b){
	cout<<"abos numeros son iguales"<<endl;
	}
		
	else{
		if(RB_a<RB_b){
			cout<<"El numero mayor es: "<<RB_b<<endl;
			cout<<"El numero menor es: "<<RB_a<<endl;
		}
		else{
			cout<<"El numero mayor es :"<<RB_a<<endl;
			cout<<"El numero menor es :"<<RB_b<<endl;
		}	
	}
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: La comparacion de 2 numeros"<<endl;
cout<<"//==>Archivo : ReneBalseca_compara.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";

	return 0;
	}
