#include <iostream>
using namespace std;
void calcularEdad( int aa,int ma,int da,int an,int mn,int dn);
int main ()
{
    int aa;  
    int ma; 
    int da; 
    int an; 
    int mn; 
    int dn; 
    cout<<"Ingresar la fecha actual: "<<endl;
    cout << "Ano Actual: ";   
	cin >> aa;
    cout << "Mes Actual: ";   
	cin >> ma;
    cout << "Dia Actual: ";  
	cin >> da;
    cout<<"Ingresar la fecha de nacimiento: "<<endl;
    cout << "Ano Nacimiento: ";  
	cin >> an;
    cout << "Mes de Nacimiento: ";  
	cin >> mn;
    cout << "Dia de Nacimiento: ";  
	cin >> dn;
    calcularEdad(aa,ma,da,an,mn,dn);
    return 0;
}
void calcularEdad( int aa , int ma, int da, int an, int mn, int dn)
{
    int dia , mes;
    if (da<dn)
    {  
        da=da+30; 
        ma=ma-1; 
        dia=da-dn; 
    }
    else 
        dia=da-dn;
    if(ma<mn)
    {   
        ma=ma+12; 
        aa=aa-1; 
        mes=ma-mn; 
    }
    else 
        mes = ma - mn; 
    cout << "La edad es de: "<<endl;
    cout << " Anos: "<<aa-an<<endl; 
    cout << " Meses: "<<mes<<endl; 
    cout << " Dias: "<<dia<<endl; 
}

