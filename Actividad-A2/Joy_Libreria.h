// Funciones implementadas por Ruano Jama Joseph



int RJ_Comparar()
{
    int rj_r1,rj_r2;
	cout<<"Ingrese el primer número: ";
	cin>>rj_r1;
	cout<<"Ingrese el segundo número: ";
	cin>>rj_r2;
	if(rj_r1==rj_r2){
		cout<<"Los números son  iguales";		
	}
	else if(rj_r1>rj_r2){
		cout<<"El número mayor es: "<<rj_r1<<endl;
	}
	if(rj_r2>rj_r1){
		cout<<"El número mayor es: "<<rj_r2<<endl;
	}

cout<<"//================================================"<<endl;
cout<<" //==>Nombre del programa: Comparar 2 números y decir cual es el mayor"<<endl;
cout<<"//==>Archivo : RuanoJoseph-Compara.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-28"<<endl;
cout<<"//=================================================";
	return 0;
	}	



//--------------------------------------------------------------------------
//**************************************************************************



int RJ_CuentaMoneda()
{
	int rj_r1,rj_camo=0,rj_mone=0,rj_moda=0,rj_mond=0;
   float rj_r2,rj_sumto=0,rj_mone1=0,rj_mone2=0,rj_mone3=0,rj_die=0.10, rj_vei=0.25, rj_cin=0.50;
   cout<<"Cantidad de monedas a ingresar "<<endl; 
   cin>>rj_r1;
  do{
    cout<<"Inserte la moneda:"<<endl;
	cin>>rj_r2;
    rj_camo=rj_camo+1;
    rj_sumto=rj_sumto+rj_r2;
    if(rj_r2==rj_die){
        rj_mone=rj_mone+1;
        rj_mone1=rj_mone1+rj_r2;
    }
      if(rj_r2==rj_vei){
          rj_moda=rj_moda+1;
          rj_mone2=rj_mone2+rj_r2;
      }
       if(rj_r2==rj_cin){
          rj_mond=rj_mond+1;
          rj_mone3=rj_mone3+rj_r2;
       }
  }while(rj_camo<rj_r1);
cout<<" Su cantidad de monedas insertadas es de: "<<rj_camo<<endl;
cout<<" La suma total de las monedas es de: "<<rj_sumto<<" $"<<endl;
cout<<"//================================================"<<endl;
cout<<" Su cantidad de moneda de 10cts es: "<<rj_mone<<endl; 
cout<<" El total de la(s) moneda(s) de 10cts es: "<<rj_mone1<<" $"<<endl;
cout<<"//================================================"<<endl;
cout<<" Su cantidad de moneda de 25cts es: "<<rj_moda<<" cts"<<endl;
cout<<" El total de la(s) moneda(s) de 25cts es: "<<rj_mone2<<" $"<<endl;
cout<<"//================================================"<<endl;
cout<<" Su cantidad de moneda de 50cts es: "<<rj_mond<<" cts"<<endl;
cout<<" El total de la(s) moneda(s) de 50cts es: "<<rj_mone3<<" $"<<endl;
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Cuenta Moneda"<<endl;
cout<<"//==>Archivo : RuanoJoseph-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-28"<<endl;
cout<<"//=================================================";
return 0;
}



//--------------------------------------------------------------------------
//**************************************************************************

//--------------------------------------------------------------------------
//**************************************************************************

int RJ_Edad()
{
	void calcularEdad( int rj_anac,int rj_meac,int rj_diac,int rj_ana,int rj_men,int rj_din);


    int rj_anac;  
    int rj_meac; 
    int rj_diac; 
    int rj_ana; 
    int rj_men; 
    int rj_din; 
    cout<<"Ingresar la fecha actual: "<<endl;
    cout << "Año Actual: ";   
	cin >> rj_anac;
    cout << "Mes Actual: ";   
	cin >> rj_meac;
    cout << "Día Actual: ";  
	cin >> rj_diac;
    cout<<"Ingresar la fecha de nacimiento: "<<endl;
    cout << "Año de Nacimiento: ";  
	cin >> rj_ana;
    cout << "Mes de Nacimiento: ";  
	cin >> rj_men;
    cout << "Día de Nacimiento: ";  
	cin >> rj_din;
    calcularEdad(rj_anac,rj_meac,rj_diac,rj_ana,rj_men,rj_din);
    return 0;
}
void calcularEdad( int rj_anac , int rj_meac, int rj_diac, int rj_ana, int rj_men, int rj_din)
{
    int rj_dia , rj_mes;
    if (rj_diac<rj_din)
    {  
        rj_diac=rj_diac+30; 
        rj_meac=rj_meac-1; 
        rj_diac=rj_diac-rj_din; 
    }
    else 
        rj_dia=rj_diac-rj_din;
    if(rj_meac<rj_men)
    {   
        rj_meac=rj_meac+12; 
        rj_anac=rj_anac-1 ; 
        rj_mes=rj_meac-rj_men; 
    }
    else 
        rj_mes = rj_meac - rj_men; 
    cout << "La edad es de: "<<endl;
    cout << " Años: " <<rj_anac - rj_ana << endl; 
    cout << " Meses: " << rj_mes << endl; 
    cout << " Días: " << rj_dia << endl;
cout<<"//================================================"<<endl;
cout<<" //==> Nombre del programa: Calcular edad en dias, meses, años"<<endl;
cout<<"//==> Archivo : RuanoJoseph-Edad.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-28"<<endl;
cout<<"//=================================================";
}


//--------------------------------------------------------------------------
//**************************************************************************
int RJ_PuntoVenta()
{
	int rj_r1=0,rj_r2;
	float rj_pg=0,rj_p;
	float rj_iv=0.15,rj_desc=0.12,rj_iva,rj_des,rj_totp;
	cout<<"Ingrese todos lo valores que desea sumar: ";
	cin>>rj_r2;
	do{
		cout<<"Ingrese el valor a sumar"<<rj_r1+1<<endl;
		cin>>rj_p;
		rj_r1=rj_r1+1;
		rj_pg=rj_pg+rj_p;
	}while (rj_r1<rj_r2);
		cout<<"El resultado final de la sumatoria es de: "<<rj_pg<<endl;
	rj_iva=rj_pg*rj_iv;
	rj_des=rj_pg*rj_desc;
	rj_totp=rj_pg-rj_des+rj_iva;
	cout<<"El iva es de: "<<rj_iva<<"$"<<endl;
	cout<<"El descuento es de: "<<rj_des<<"$"<<endl;
	cout<<"El total a pagar final es de: "<<rj_totp<<"$"<<endl;
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Ingresar x cantidad de productos y calcular, iva, descuento,total a pagar."<<endl;
cout<<"//==>Archivo : RuanoJoseph-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-28"<<endl;
cout<<"//=================================================";
	return 0;

}
	

//--------------------------------------------------------------------------
//**************************************************************************

int RJ_Suma()
{
   int rj_r1=0, rj_r2; 
	float  rj_res=0, rj_r3;
	cout<<"Ingrese todos lo valores que desa sumar: ";
	cin>> rj_r2;
	do{
		cout<<"Ingrese el valor a sumar"<< rj_r1+1<<endl;
		cin>> rj_r3;
		 rj_r1= rj_r1+1;
		 rj_res= rj_res+ rj_r3;
	}while ( rj_r1< rj_r2);
		cout<<"El resultado  de su suma es : "<< rj_res<<endl;
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Suma de varios números"<<endl;
cout<<"//==>Archivo : RuanoJoseph-Suma.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Joseph"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-22"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-28"<<endl;
cout<<"//=================================================";
		return(0);
}

//--------------------------------------------------------------------------
//**************************************************************************


int RJ_Menu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE Ruano Joseph **************"<<endl<<endl;
			cout<<"1.- Comparar Números. \n";
			cout<<"2.- Contador de  Moneda.\n";
			cout<<"3.- Calcular Edad. \n"; 
			cout<<"4.- Punto Venta. \n";
			cout<<"5.- Suma de Números.\n";
			cout<<"0.- Salir del Menú. \n";
			cout<<" Ingrese una Opción : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					cout<<"-------------------------------------------"<<endl;
					cout<<"\n Comparar Números "<<endl;
					 RJ_Comparar();			
					break;
				case 2:
					system("clear");
					cout<<"-------------------------------------------"<<endl;
					cout<<"\n Clasifica y Cuenta Moneda "<<endl;
					 RJ_CuentaMoneda();
					break;
				case 3:
					system("clear");
					cout<<"-------------------------------------------"<<endl;
					cout<<"Calcular Edad"<<endl;
				     RJ_Edad();
					break;
				case 4:
					system("clear");
					cout<<"-------------------------------------------"<<endl;
					cout<<"\n Punto Venta "<<endl;
					RJ_PuntoVenta();
					break;
				case 5:
					system("clear");
					cout<<"-------------------------------------------"<<endl;
					cout<<"\n Suma de Números "<<endl;
					RJ_Suma();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpción no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   cout<<flag;
	}while(op!=0);
	

	return(0);

}
