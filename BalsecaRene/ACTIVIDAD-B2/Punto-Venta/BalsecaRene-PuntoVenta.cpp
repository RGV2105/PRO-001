#include <iostream>

using namespace std;

int main(){

	int i=0;
	float num,des,iva,subt,t,total;

	cout<<"cuantos productos vas a reregistrar para tu factura"<<endl;
	cin>>i;

	do {
		
	cout<< "cual es el valor de los productos:"<<endl;
		cin>>num;
		t=num+t;
		i--;

		}while(i>0);	


		cout<<"porsentaje del descueno"<<endl;
		cin>>des;
	if (des>1){
		des=t*des/100;
		subt=t-des;
	}
	else{
		subt=t;
	}

	iva=subt*12/100;
	total=subt+iva;
	
	cout<< "el descuento es de: $"<<des<<endl;
	cout<<"el subtotal es: $"<<subt<<endl;
	cout<<"el iva es: $"<<iva<<endl;
	cout<< "total de la factura es: $"<<total<<endl;

	return 0;
}
