#include <iostream>
using namespace std;
int main(){
	int x=0,a;
	float y=0,b;
	cout<<"Ingrese todos lo valores que desa sumar: ";
	cin>>a;
	do{
		cout<<"Ingrese el valor a sumar"<<x+1<<endl;
		cin>>b;
		x=x+1;
		y=y+b;
	}while (x<a);
		cout<<"El resultado final de la sumatoria es de: "<<y<<endl;
		return(0);
}
