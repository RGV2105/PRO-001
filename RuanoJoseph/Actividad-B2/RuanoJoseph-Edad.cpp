#include <iostream>
using namespace std;
void calcularEdad( int anac,int meac,int diac,int an,int mn,int dn);
int main ()
{
    int anac;  
    int meac; 
    int diac; 
    int an; 
    int mn; 
    int dn; 
    cout<<"Ingresar la fecha actual: "<<endl;
    cout << "Ano Actual: ";   
	cin >> anac;
    cout << "Mes Actual: ";   
	cin >> meac;
    cout << "Dia Actual: ";  
	cin >> diac;
    cout<<"Ingresar la fecha de nacimiento: "<<endl;
    cout << "Ano Nacimiento: ";  
	cin >> an;
    cout << "Mes de Nacimiento: ";  
	cin >> mn;
    cout << "Dia de Nacimiento: ";  
	cin >> dn;
    calcularEdad(anac,meac,diac,an,mn,dn);
    return 0;
}
void calcularEdad( int anac , int meac, int diac, int an, int mn, int dn)
{
    int dia , mes;
    if (diac<dn)
    {  
        diac=diac+30; 
        meac=meac-1; 
        diac=diac-dn; 
    }
    else 
        dia=diac-dn;
    if(meac<mn)
    {   
        meac=meac+12; 
        anac=anac-1 ; 
        mes=meac-mn; 
    }
    else 
        mes = meac - mn; 
    cout << "La edad es de: "<<endl;
    cout << " Anos: " <<anac - an << endl; 
    cout << " Meses: " << mes << endl; 
    cout << " Dias: " << dia << endl;
}
