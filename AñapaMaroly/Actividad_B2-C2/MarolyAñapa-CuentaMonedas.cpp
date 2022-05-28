//================================================
//==>Nombfe del pfograma: cuenta monedas
//==>Archivo : MarolyAñapa-CuentaMonedas.cpp
//==>Autor: Añapa Corozo Maroly Mayerli
//==>Fecha de elaboración: 2022-05-22
//==>Fecha ultima actualización: 2022-05-26
//=================================================

#include <iostream>
using namespace std;

int main(){
	

   int ma_r,ma_r1=0,ma_r2=0,ma_r3=0,ma_r4=0;
   float ma_j,ma_j1=0,ma_j2=0,ma_j3=0,ma_j4=0,ma_s=0.10,ma_s1=0.25,ma_s2=0.50;
   
	cout<<"Ingrese la cantidad de monedas: ";
	cin>>ma_r;
   
  do{

    cout<<"Ingrese el tipo de la moneda t=";
	
	cin>>ma_j;
    ma_r1=ma_r1+1;
    
    if(ma_j==ma_s){
        ma_r2=ma_r2+1;
        ma_j2=ma_j2+ma_j;
    }

      if(ma_j==ma_s1){
      	
          ma_r3=ma_r3+1;   
          ma_j3=ma_j3+ma_j;
      }
       if(ma_j==ma_s2){
       	
          ma_r4=ma_r4+1;
          ma_j4=ma_j4+ma_j;
       }
       
  }while(ma_r1<ma_r);
  


cout<<"Usted cuenta con "<<ma_r1<<  " Moneda y un total de "<<ma_r1<<"  moneda"<<endl;
cout<<"Usted cuenta con "<<ma_r2<<  " Moneda de $0.10 que suman   "<<ma_r2<<"  moneda"<<endl;
cout<<"Usted cuenta con "<<ma_r3<<  " Moneda de $0.25 que suman "<<ma_r3<<"  moneda"<<endl;
cout<<"Usted cuenta con "<<ma_r4<<  " Moneda de $0.50 que suman "<<ma_r4<<"  moneda"<<endl;




cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: cuenta monedas"<<endl;
cout<<"//==>Archivo : MarolyAñapa-CuentaMonedas.cpp"<<endl;
cout<<"//==>Autor: Añapa Corozo Maroly Mayerli"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";

return 0;
}
