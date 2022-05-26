//================================================
//==>Nombre del programa: Calcular edad en dias, meses, años
//==>Archivo : RuanoJoseph-Edad.cpp
//==>Autor: Ruano Jama Joseph
//==>Fecha de elaboración: 2022-05-22
//==>Fecha ultima actualización: 2022-05-26
//=================================================
#include <iostream>
using namespace std;
void calcularEdad( int rj_anac,int rj_meac,int rj_diac,int rj_an,int rj_mn,int rj_dn);
int main ()
{
    int rj_anac;  
    int rj_meac; 
    int rj_diac; 
    int rj_an; 
    int rj_mn; 
    int rj_dn; 
    cout<<"Ingresar la fecha actual: "<<endl;
    cout << "Ano Actual: ";   
	cin >> rj_anac;
    cout << "Mes Actual: ";   
	cin >> rj_meac;
    cout << "Dia Actual: ";  
	cin >> rj_diac;
    cout<<"Ingresar la fecha de nacimiento: "<<endl;
    cout << "Ano Nacimiento: ";  
	cin >> rj_an;
    cout << "Mes de Nacimiento: ";  
	cin >> rj_mn;
    cout << "Dia de Nacimiento: ";  
	cin >> rj_dn;
    calcularEdad(rj_anac,rj_meac,rj_diac,rj_an,rj_mn,rj_dn);
    return 0;
}
void calcularEdad( int rj_anac , int rj_meac, int rj_diac, int rj_an, int rj_mn, int rj_dn)
{
    int rj_dia , rj_mes;
    if (rj_diac<rj_dn)
    {  
        rj_diac=rj_diac+30; 
        rj_meac=rj_meac-1; 
        rj_diac=rj_diac-rj_dn; 
    }
    else 
        rj_dia=rj_diac-rj_dn;
    if(rj_meac<rj_mn)
    {   
        rj_meac=rj_meac+12; 
        rj_anac=rj_anac-1 ; 
        rj_mes=rj_meac-rj_mn; 
    }
    else 
        rj_mes = rj_meac - rj_mn; 
    cout << "La edad es de: "<<endl;
    cout << " Anos: " <<rj_anac - rj_an << endl; 
    cout << " Meses: " << rj_mes << endl; 
    cout << " Dias: " << rj_dia << endl;
cout<<"//================================================"<<endl;
cout<<" //==> Nombre del programa: Calcular edad en dias, meses, años"<<endl;
cout<<"//==> Archivo : RuanoJoseph-Edad.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";
}
