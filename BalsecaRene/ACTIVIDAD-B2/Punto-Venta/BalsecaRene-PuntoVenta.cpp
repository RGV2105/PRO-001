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

	int RB_i=0;
	float RB_num,RB_des,RB_iva,RB_subt,RB_t,RB_total;

	cout<<"cuantos productos vas a reregistrar para tu factura"<<endl;
	cin>>RB_i;

	do {
		
	cout<< "cual es el valor de los productos:"<<endl;
		cin>>RB_num;
		RB_t=RB_num+RB_t;
		RB_i--;

		}while(RB_i>0);	


		cout<<"porsentaje del descueno"<<endl;
		cin>>RB_des;
	if (RB_des>1){
		RB_des=RB_t*RB_des/100;
		RB_subt=RB_t-RB_des;
	}
	else{
		RB_subt=RB_t;
	}

	RB_iva=RB_subt*12/100;
	RB_total=RB_subt+RB_iva;
	
	cout<<"el subtotal es: $"<<RB_subt<<endl;
	cout<< "el descuento es de: $"<<RB_des<<endl;
	cout<<"el iva es: $"<<RB_iva<<endl;
	cout<< "total de la factura es: $"<<RB_total<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: factura"<<endl;
cout<<"//==>Archivo : ReneBalseca_PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";

	return 0;
}
