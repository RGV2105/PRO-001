//================================================
//==> Nombre del programa: La cuenta de monedas
//==> Archivo : ReneBalseca_CuentaMoneda.cpp
//==>Autor: Carlos Rene Balseca Nevarez
//==>Fecha de elaboración: 2022-03-20
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include<iostream>
using namespace std;
int main(){
	
	int RB_di,RB_ve,RB_ci;
	float RB_diez,RB_vein,RB_ciq,RB_total;
	
	cout<<"cuantas monedas de 10ctv son"<<endl;
	cin>>RB_di;
	cout<<"cuantas monedas de 25ctv son"<<endl;
	cin>>RB_ve;
	cout<<"cuantas monedas de 50ctv son"<<endl;
	cin>>RB_ci;
	
	RB_diez=RB_di*0.10;
	RB_vein=RB_ve*0.25;
	RB_ciq=RB_ci*0.50;
	RB_total=RB_diez+RB_vein+RB_ciq;
	
	cout<<"el tolal de las monedas de 10ctv es: $"<<RB_diez<<endl;
	cout<<"el tolal de las monedas de 25ctv es: $"<<RB_vein<<endl;
	cout<<"el tolal de las monedas de 50ctv es: $"<<RB_ciq<<endl;
	cout<<"el valor total es: $"<<RB_total<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==>Archivo : ReneBalseca_CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";
	
	return 0;
}
