#include<iostream>
using namespace std;

int main(){
	int aa,an,da,dn,edad,ma,mn;
	cout<<"ingrese su fecha de nacimiento"<<endl;
	cout<<"formato de dia, mes, año"<<endl;
	cin>> dn;
	cin>> mn;
	cin>> an;
	cout<<"ingrese su fecha actual"<<endl;
	cout<<"formato de dia, mes, año"<<endl;
	cin>> da;
	cin>> ma;
	cin>> aa;
	edad=aa-an;
	if(ma<mn){
		edad=edad-1;
	}
	else{
		if(ma==mn){
			if(da<dn)
			edad=edad-1;
			
		}
		else{
			if(dn==da){
				cout<<"felicidades es tu cumpleaños"<<endl;
			}
		}
	}
	if(edad<0){
		cout<<"no se puede carcular la edad";
	}
		else{
			cout<<"tu edad es: "<<edad;
		}
	
	return 0;
}
