#include <iostream>
using namespace std;
int main(){
 
	int a,b; 
 
	cout<< "que numero vas a comparar"<<endl;
	cin>>a;
	cin>>b;
	if(a==b){
	cout<<"abos numeros son iguales";
	}
		
	else{
		if(a<b){
			cout<<"el mayor es:"<<b<<endl;
			cout<<"el menor es:"<<a<<endl;
		}
		else{
			cout<<"el mayos  es:"<<a<<endl;
			cout<<"el menor es:"<<b<<endl;
		}	
	}
	
	return 0;
}
