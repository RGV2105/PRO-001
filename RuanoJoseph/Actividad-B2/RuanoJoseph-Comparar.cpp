
#include <iostream>
using namespace std;

int main(){
	int r1,r2;
	cout<<"Digite dos Numeros: ";
	cin>>r1>>r2;
	if(r1==r2){
		cout<<"Ambos numeros son iguales: ";		
	}
	else if(r1>r2){
		cout<<"El mayor es: "<<r1<<endl;
	}
	else{
		cout<<"El mayor es: "<<r2<<endl;
		
		if(r1<r2){
			cout<<"El menor es: "<<r1<<endl;
		}
		else{
			cout<<"El menor es: "<<r2<<endl;
		}
	}
	return 0;
	}
