// funciones implementadas para RENE BALSECA

//


int maCompara(){
	
		int ma_a,ma_b;
	cout<<"Ingrese el primer numero: ";
	cin>>ma_a;
	cout<<"Ingrese el segundo numero: ";
	cin>>ma_b;
	if(ma_a==ma_b){
		cout<<"Los numeros son  iguales";		
	}
	else{
		if(ma_a<ma_b){
			cout<<"El numero mayor es: "<<ma_b<<endl;
			cout<<"El numero menor es: "<<ma_a<<endl;
		}
		else{
			cout<<"El numero mayor es: "<<ma_a<<endl;
			cout<<"El numero menor es: "<<ma_b<<endl;
		}	
	}

cout<<"//================================================"<<endl;
cout<<" //==>Nombre del programa: Comparar 2 numeros y decir cual es el mayor"<<endl;
cout<<"//==>Archivo : MarolyAñapa-Comparar.cpp"<<endl;
cout<<"//==>Autor: Añapa Corozo Maroly Mayerli"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";
	
	return 0;
}
	
int maCuentaMonedas(){
	
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

int maLaEdad(){
	
	
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
void macalcularEdad( int ma_anac , int ma_meac, int ma_diac, int ma_an, int ma_mn, int ma_dn)
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

int maPuntoVenta(){

	int ma_r1=0,ma_r2;
	float ma_pg=0,ma_p;
	float ma_iv=0.15,ma_desc=0.12,ma_iva,ma_des,ma_totp;
	cout<<"Ingrese todos lo valores que desea sumar: ";
	cin>>ma_r2;
	do{
		cout<<"Ingrese el valor a sumar"<<ma_r1+1<<endl;
		cin>>ma_p;
		ma_r1=ma_r1+1;
		ma_pg=ma_pg+ma_p;
	}while (ma_r1<ma_r2);
		cout<<"El resultado final de la sumatoria es de: "<<ma_pg<<endl;
	ma_iva=ma_pg*ma_iv;
	ma_des=ma_pg*ma_desc;
	ma_totp=ma_pg-ma_des+ma_iva;
	cout<<"El iva es de: "<<ma_iva<<"$"<<endl;
	cout<<"El descuento es de: "<<ma_des<<"$"<<endl;
	cout<<"El total a pagar final es de: "<<ma_totp<<"$"<<endl;
	
	cout<<"//================================================"<<endl;
cout<<" //==>Nombre del programa:  una factura"<<endl;
cout<<"//==>Archivo : MarolyAñapa-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Añapa Corozo Maroly Mayerli"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";
	
	return 0;
}

int maSumaN(){
	
	int ma_a=0, ma_r; 
	float  ma_t=0, ma_v;
		cout<<"Ingrese todos lo valores que desa sumar: ";
		cin>> ma_r;
	do{
		cout<<"Ingrese el valor a sumar"<< ma_a+1<<endl;
		cin>> ma_v;
		 ma_a= ma_a+1;
		 ma_t= ma_t+ ma_v;
	}while ( ma_r>ma_a);
		cout<<"El resultado  de su suma es : "<< ma_t<<endl;


cout<<"//================================================"<<endl;
cout<<" //==>Nombre del programa:  la suma de varios numeros"<<endl;
cout<<"//==>Archivo : MarolyAñapa-Comparar.cpp"<<endl;
cout<<"//==>Autor: Añapa Corozo Maroly Mayerli"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-26"<<endl;
cout<<"//=================================================";
	
	return 0;
}


int ma_menu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE MAROLI AÑAPA**************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA EDAD. \n";
			cout<<"5.- MAQUINA CUENTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable opp siver para la opcion a escoger
			switch(op){
				case 1:
					system("clear");
					maSumaN();			
					break;
				case 2:
					system("clear");
					
					maCompara();
					break;
				case 3:
					system("clear");
					maPuntoVenta();
					break;
				case 4:
					system("clear");
					maLaEdad();
					break;
				case 5:
					system("clear");
					maCuentaMonedas();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   cout<<flag;
	}while(op!=0);
	

	return(0);

}
