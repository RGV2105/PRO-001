#include<iostream>
using namespace std;

int main(){
	
	int i=0,a,s;
	cout<<"cuantos numeros va a sumar"<<endl;
	cin>>i;

	do {
		
	cout<< "cual es el numero q vas a sumar:"<<endl;
		cin>>a;
		s=s+a;
		i--;
	}while(i>0);
		
	cout<<"el resultado de la suma es: " <<s<<endl;
	
	return 0;
}
