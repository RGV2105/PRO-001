//================================================
//==>Nombre del programa: Cuenta Moneda
//==>Archivo : RuanoJoseph-CuentaMoneda.cpp
//==>Autor: Ruano Jama Joseph
//==>Fecha de elaboración: 2022-04-22
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>
using namespace std;

int main()
{
   int rj_r,rj_r1=0,rj_r2=0,rj_r3=0,rj_r4=0;
   
   float rj_j,rj_j1=0,rj_j2=0,rj_j3=0,rj_j4=0,rj_s=0.10,rj_s1=0.25,rj_s2=0.50;
   
   cout<<"Ingrese la cantidad de monedas: "; cin>>rj_r;
   
  do{

    cout<<"Ingrese el tipo de la moneda t=";cin>>rj_j;
    
    rj_r1=rj_r1+1;
    
    rj_j1=rj_j1+1;
    
    if(rj_j==rj_s){
    	
        rj_r2=rj_r2+1;
        
        rj_j2=rj_j2+rj_j;
    }

      if(rj_j==rj_s1){
      	
          rj_r3=rj_r3+1;
          
          rj_j3=rj_j3+rj_j;
      }


       if(rj_j==rj_s2){
       	
          rj_r4=rj_r4+1;
          
          rj_j4=rj_j4+rj_j;
       }
       
  }while(rj_r1<rj_r);
  


cout<<"Usted cuenta con "<<rj_r1<<  " Moneda y un total de "<<rj_r1<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<rj_r2<<  " Moneda de $0.10 que suman    "<<rj_r2<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<rj_r3<<  " Moneda de $0.25 que suman "<<rj_r3<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<rj_r4<<  " Moneda de $0.50 que suman "<<rj_r4<<"  moneda"<<endl;
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Cuenta Moneda"<<endl;
cout<<"//==>Archivo : RuanoJoseph-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//=================================================";
return 0;
}
