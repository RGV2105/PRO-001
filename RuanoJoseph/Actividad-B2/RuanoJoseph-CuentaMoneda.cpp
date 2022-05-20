#include<iostream>
using namespace std;

int main()
{
   int r,r1=0,r2=0,r3=0,r4=0;
   
   float j,j1=0,j2=0,j3=0,j4=0,s=0.10, s1=0.25, s2=0.50;
   
   cout<<"Ingrese la cantidad de monedas: "; cin>>r;
   
  do{

    cout<<"Ingrese el tipo de la moneda t=";cin>>j;
    
    r1=r1+1;
    
    j1=j1+1;
    
    if(j==s){
    	
        r2=r2+1;
        
        j2=j2+j;
    }

      if(j==s1){
      	
          r3=r3+1;
          
          j3=j3+j;
      }


       if(j==s2){
       	
          r4=r4+1;
          
          j4=j4+j;
       }
       
  }while(r1<r);
  


cout<<"Usted cuenta con "<<r1<<  " Moneda y un total de "<<r1<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<r2<<  " Moneda de $0.10 que suman    "<<r2<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<r3<<  " Moneda de $0.25 que suman "<<r3<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<r4<<  " Moneda de $0.50 que suman "<<r4<<"  moneda"<<endl;
return 0;
}
