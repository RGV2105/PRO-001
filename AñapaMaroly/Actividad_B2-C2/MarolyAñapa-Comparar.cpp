//================================================
//==>Nombre del programa: Comparar 2 numeros y decir cual es el mayor
//==>Archivo : MarolyAñapa-Comparar.cpp
//==>Autor: Añapa Corozo Maroly Mayerli
//==>Fecha de elaboración: 2022-05-22
//==>Fecha ultima actualización: 2022-05-26
//=================================================
#include <iostream>
using namespace std;

int main(){
	int ma_a,ma_b;
	cout<<"Ingrese el primer numero: ";
	cin>>ma_a;
	cout<<"Ingrese el segundo numero: ";
	cin>>ma_b;
	if(ma_a==ma_b){
		cout<<"Los numeros son  iguales";		
	}
	else{
		if(ma_a<ma_b){
			cout<<"El numero mayor es: "<<ma_b<<endl;
			cout<<"El numero menor es: "<<ma_a<<endl;
		}
		else{ 
			cout<<"El numero mayor es: "<<ma_a<<endl;
			cout<<"El numero menor es: "<<ma_b<<endl;
		}	
	}

cout<<"//================================================"<<endl;
cout<<" //==>Nombre del programa: Comparar 2 numeros y decir cual es el mayor"<<endl;
cout<<"//==>Archivo : MarolyAñapa-Comparar.cpp"<<endl;
cout<<"//==>Autor: Añapa Corozo Maroly Mayerli"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";
	return 0;
	}
