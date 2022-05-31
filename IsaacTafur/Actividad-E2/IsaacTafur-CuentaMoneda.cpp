//================================================
//==> Nombre del programa: Cuenta de monedas
//==> Archivo : TafurIsaac-CuentaMoneda.cpp
//==>Autor: Isaac Alejandro Tafur León
//==>Fecha de elaboración: 2022-03-20
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include<iostream>
using namespace std;
int main(){
	
	int IS_di,IS_ve,IS_ci;
	float IS_diez,IS_vein,IS_ciq,IS_total;
	
	cout<<"cuantas monedas de 10ctv son"<<endl;
	cin>>IS_di;
	cout<<"cuantas monedas de 25ctv son"<<endl;
	cin>>IS_ve;
	cout<<"cuantas monedas de 50ctv son"<<endl;
	cin>>IS_ci;
	
	IS_diez=IS_di*0.10;
	IS_vein=IS_ve*0.25;
	IS_ciq=IS_ci*0.50;
	IS_total=IS_diez+IS_vein+IS_ciq;
	
	cout<<"el tolal de las monedas de 10ctv es: $"<<IS_diez<<endl;
	cout<<"el tolal de las monedas de 25ctv es: $"<<IS_vein<<endl;
	cout<<"el tolal de las monedas de 50ctv es: $"<<IS_ciq<<endl;
	cout<<"el valor total es: $"<<IS_total<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==>Archivo : TafurIsaac-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Isaac Alejandro Tafur León"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";
	
	return 0;
}
