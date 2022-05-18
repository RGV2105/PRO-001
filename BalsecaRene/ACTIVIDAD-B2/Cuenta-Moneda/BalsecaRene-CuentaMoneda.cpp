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
	
	int di,ve,ci;
	float diez,vein,ciq,total;
	
	cout<<"cuantas monedas de 10ctv son"<<endl;
	cin>>di;
	cout<<"cuantas monedas de 25ctv son"<<endl;
	cin>>ve;
	cout<<"cuantas monedas de 50ctv son"<<endl;
	cin>>ci;
	
	diez=di*0.10;
	vein=ve*0.25;
	ciq=ci*0.50;
	total=diez+vein+ciq;
	
	cout<<"el tolal de las monedas de 10ctv es: $"<<diez<<endl;
	cout<<"el tolal de las monedas de 25ctv es: $"<<vein<<endl;
	cout<<"el tolal de las monedas de 50ctv es: $"<<ciq<<endl;
	cout<<"el valor total es: $"<<total<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==>Archivo : ReneBalseca_CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";
	
	return 0;
}
