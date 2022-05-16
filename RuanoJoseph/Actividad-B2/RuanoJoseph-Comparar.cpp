//================================================
//==>Nombre del programa: Comparar 2 numeros y decir cual es el mayor o menor e igual
//==>Archivo : RuanoJoseph-Comparar.cpp
//==>Autor: Ruano Jama Joseph
//==>Fecha de elaboración: 2022-04-22
//==>Fecha ultima actualización: 2022-05-16
//=================================================
#include <iostream>
using namespace std;

int main(){
	int rj_r1,rj_r2;
	cout<<"Digite dos Numeros: ";
	cin>>rj_r1>>rj_r2;
	if(rj_r1==rj_r2){
		cout<<"Ambos numeros son iguales: ";		
	}
	else if(rj_r1>rj_r2){
		cout<<"El mayor es: "<<rj_r1<<endl;
	}
	else{
		cout<<"El mayor es: "<<rj_r2<<endl;
		
		if(rj_r1<rj_r2){
			cout<<"El menor es: "<<rj_r1<<endl;
		}
		else{
			cout<<"El menor es: "<<rj_r2<<endl;
		}
		cout<<"//================================================"<<endl;
cout<<" //==>Nombre del programa: Comparar 2 numeros y decir cual es el mayor o menor e igual"<<endl;
cout<<"//==>Archivo : RuanoJoseph-Comparar.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-16"<<endl;
cout<<"//=================================================";
	}
	return 0;
	}
