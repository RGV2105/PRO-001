#include <iostream>
using namespace std;
int main(){
	float n1,n2,iv=0,des=0,tp=0,pro=0,topa=0;
	cout<<"Igresar el valor de primer productos:";
	cin>>n1;
	cout<<"Ingrese el valor del segundo producto: ";
	cin>>n2;
	pro=(n1+n2);
	iv=pro*0.12;
	tp=pro+iv;
	des=tp*0.10;
	topa=tp-des;
	cout<<"El iva de su compra es: "<<iv<<endl;
	cout<<"El descuento de su compra es: "<<des<<endl;
	cout<<"El total a pagar de su compra es: "<<topa<<endl;
	
	return 0;
}
