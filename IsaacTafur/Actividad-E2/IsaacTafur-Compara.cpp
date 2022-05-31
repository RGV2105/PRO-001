//================================================
//==> Nombre del programa: La comparacion de 2 numeros
//==> Archivo : TafurIsaac-Compara.cpp
//==>Autor: Isaac Alejandro Tafur León
//==>Fecha de elaboración: 2022-03-20
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include <iostream>
using namespace std;

int main(){
	int IS_a,IS_b; 
 
	cout<< "El numero que vas a comparar"<<endl;
	cin>>IS_a;
	cin>>IS_b;
	if(IS_a==IS_b){
	cout<<"Ambos numeros son iguales"<<endl;
	}
		
	else{
		if(IS_a<IS_b){
			cout<<"El numero mayor es: "<<IS_b<<endl;
			cout<<"El numero menor es: "<<IS_a<<endl;
		}
		else{
			cout<<"El numero mayor es :"<<IS_a<<endl;
			cout<<"El numero menor es :"<<IS_b<<endl;
		}	
	}
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: La comparacion de 2 numeros"<<endl;
cout<<"//==>Archivo : TafurIsaac-Compara.cpp"<<endl;
cout<<"//==>Autor: Isaac Alejandro Tafur León"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";

	return 0;
	}
