//================================================
//==> Nombre del programa: Factura
//==> Archivo : ReneBalseca_PuntoVenta.cpp
//==>Autor: Carlos Rene Balseca Nevarez
//==>Fecha de elaboración: 2022-03-20
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include <iostream>
using namespace std;

int main(){

	int IS_i=0;
	float IS_num,IS_des,IS_iva,IS_subt,IS_t,IS_total;

	cout<<"cuantos productos vas a reregistrar para tu factura"<<endl;
	cin>>IS_i;

	do {
		
	cout<< "cual es el valor de los productos:"<<endl;
		cin>>IS_num;
		IS_t=IS_num+IS_t;
		IS_i--;

		}while(IS_i>0);	


		cout<<"porsentaje del descueno"<<endl;
		cin>>IS_des;
	if (IS_des>1){
		IS_des=IS_t*IS_des/100;
		IS_subt=IS_t-IS_des;
	}
	else{
		IS_subt=IS_t;
	}

	IS_iva=IS_subt*12/100;
	IS_total=IS_subt+IS_iva;
	
	cout<<"el subtotal es: $"<<IS_subt<<endl;
	cout<< "el descuento es de: $"<<IS_des<<endl;
	cout<<"el iva es: $"<<IS_iva<<endl;
	cout<< "total de la factura es: $"<<IS_total<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: factura"<<endl;
cout<<"//==>Archivo : TafurIsaac-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Isaac Alejandro Tafur León"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";

	return 0;
}
