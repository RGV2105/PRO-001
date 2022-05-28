//================================================
//==>Nombre del programa: la edad de una persona
//==>Archivo : MarolyAñapa-la edad.cpp
//==>Autor: Añapa Corozo Maroly Mayerli
//==>Fecha de elaboración: 2022-05-22
//==>Fecha ultima actualización: 2022-05-26
//=================================================
#include <iostream>
using namespace std;
	
    
   

int main (){
	
    void calcularEdad( int ma_anac,int ma_meac,int ma_diac,int ma_an,int ma_mn,int ma_dn);
	int ma_anac,ma_meac,ma_diac,ma_an,ma_mn,ma_dn;
	
    cout<<"Ingresar la fecha actual: "<<endl;
    cout << "Ano Actual: ";   
	cin >> ma_anac;
    cout << "Mes Actual: ";   
	cin >> ma_meac;
    cout << "Dia Actual: ";  
	cin >> ma_diac;
    cout<<"Ingresar la fecha de nacimiento: "<<endl;
    cout << "Ano Nacimiento: ";  
	cin >> ma_an;
    cout << "Mes de Nacimiento: ";  
	cin >> ma_mn;
    cout << "Dia de Nacimiento: ";  
	cin >> ma_dn;
    calcularEdad(ma_anac,ma_meac,ma_diac,ma_an,ma_mn,ma_dn);
    return 0;
}
void calcularEdad( int ma_anac , int ma_meac, int ma_diac, int ma_an, int ma_mn, int ma_dn)
{
    int ma_dia , ma_mes;
    if (ma_diac<ma_dn)
    {  
        ma_diac=ma_diac+30; 
        ma_meac=ma_meac-1; 
        ma_diac=ma_diac-ma_dn; 
    }
    else 
        ma_dia=ma_diac-ma_dn;
    if(ma_meac<ma_mn)
    {   
        ma_meac=ma_meac+12; 
        ma_anac=ma_anac-1 ; 
        ma_mes=ma_meac-ma_mn; 
    }
    else 
        ma_mes = ma_meac - ma_mn; 
    cout << "La edad es de: "<<endl;
    cout << " Anos: " <<ma_anac - ma_an << endl; 
    cout << " Meses: " << ma_mes << endl; 
    cout << " Dias: " << ma_dia << endl;
cout<<"//================================================"<<endl;
cout<<" //==> Nombre del programa: Calcular edad en dias, meses, años"<<endl;
cout<<"//==> Archivo : MarolyAñapa-la edad.cpp"<<endl;
cout<<"//==>Autor: Añapa Corozo Maroly Mayerli"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";
}
