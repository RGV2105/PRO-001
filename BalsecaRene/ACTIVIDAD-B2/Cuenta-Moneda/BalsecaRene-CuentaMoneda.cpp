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
	cout<<"el valor total es: $"<<total;
	
	return 0;
}
