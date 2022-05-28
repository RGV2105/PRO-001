// Funciones implementadas por Ruano Jama Jharol
//
//
//
//
//
//
//


int RJ_sumaN()
{
	int rj_x=0, rj_a;
	float  rj_y=0, rj_b;
	cout<<"Ingrese todos lo valores que desa sumar: ";
	cin>> rj_a;
	do{
		cout<<"Ingrese el valor a sumar"<< rj_x+1<<endl;
		cin>> rj_b;
		 rj_x= rj_x+1;
		 rj_y= rj_y+ rj_b;
	}while ( rj_x< rj_a);
		cout<<"El resultado final de la sumatoria es de: "<< rj_y<<endl;
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Suma de varios números"<<endl;
cout<<"//==>Archivo : RuanoJharol-sumaN.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Jharol"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//=================================================";
		return(0);
}



//--------------------------------------------------------------------------
//**************************************************************************



int RJ_compara()
{
	int rj_a,rj_b;
	cout<<"Escriba el primer número: ";
	cin>>rj_a;
	cout<<"Escriba el segundo número: ";
	cin>>rj_b;
	if(rj_a==rj_b){
		cout<<"Los números son  iguales"<<endl;		
	}
	else if(rj_a>rj_b){
		cout<<"El número mayor es: "<<rj_a<<endl;
	}
	if(rj_b>rj_a){
		cout<<"El número mayor es: "<<rj_b<<endl;
	}
cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Comparar 2 números"<<endl;
cout<<"//==> Archivo : RuanoJharol-compara.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Jharol"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//=================================================";
	return 0;
	}



//--------------------------------------------------------------------------
//**************************************************************************

//--------------------------------------------------------------------------
//**************************************************************************

int RJ_puntoventa()
{
	int rj_a=0,rj_x;
	float rj_pg=0,rj_p;
	float rj_iva=0.15,rj_des=0.12,rj_IVA,rj_DES,rj_TPF;
	cout<<"Ingrese todos lo valores que desea sumar: ";
	cin>>rj_x;
	do{
		cout<<"Ingrese el valor a sumar"<<rj_a+1<<endl;
		cin>>rj_p;
		rj_a=rj_a+1;
		rj_pg=rj_pg+rj_p;
	}while (rj_a<rj_x);
		cout<<"El resultado final de la sumatoria es de: "<<rj_pg<<endl;
	rj_IVA=rj_pg*rj_iva;
	rj_DES=rj_pg*rj_des;
	rj_TPF=rj_pg-rj_DES+rj_IVA;
	cout<<"El iva es de: "<<rj_IVA<<"$"<<endl;
	cout<<"El descuento es de: "<<rj_DES<<"$"<<endl;
	cout<<"El total a pagar final es de: "<<rj_TPF<<"$"<<endl;
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Punto de Venta"<<endl;
cout<<"//==>Archivo : RuanoJharol-puntoventa.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Jharol"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//=================================================";
	return 0;

}

//--------------------------------------------------------------------------
//**************************************************************************
int RJ_edad()
{
	void calcular_Edad( int rj_aa,int rj_ma,int rj_da,int rj_an,int rj_mn,int rj_dn);
    int rj_aa;  
    int rj_ma; 
    int rj_da; 
    int rj_an; 
    int rj_mn; 
    int rj_dn; 
    cout<<"Ingresar la fecha actual: "<<endl;
    cout << "Año Actual: ";   
	cin >> rj_aa;
    cout << "Mes Actual: ";   
	cin >> rj_ma;
    cout << "Día Actual: ";  
	cin >> rj_da;
    cout<<"Ingresar la fecha de nacimiento: "<<endl;
    cout << "Año Nacimiento: ";  
	cin >> rj_an;
    cout << "Mes de Nacimiento: ";  
	cin >> rj_mn;
    cout << "Día de Nacimiento: ";  
	cin >> rj_dn;
    calcular_Edad(rj_aa,rj_ma,rj_da,rj_an,rj_mn,rj_dn);
    return 0;
}
void calcular_Edad( int rj_aa , int rj_ma, int rj_da, int rj_an, int rj_mn, int rj_dn)
{
    int rj_dia , rj_mes;
    if (rj_da<rj_dn)
    {  
        rj_da=rj_da+30; 
        rj_ma=rj_ma-1; 
        rj_dia=rj_da-rj_dn; 
    }
    else 
        rj_dia=rj_da-rj_dn;
    if(rj_ma<rj_mn)
    {   
        rj_ma=rj_ma+12; 
        rj_aa=rj_aa-1 ; 
        rj_mes=rj_ma-rj_mn; 
    }
    else 
        rj_mes = rj_ma - rj_mn; 
    cout << "La edad es de: "<<endl;
    cout << " Años: " <<rj_aa - rj_an << endl; 
    cout << " Meses: " << rj_mes << endl; 
    cout << " Días: " << rj_dia << endl; 
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Calcular edad en días, meses, años"<<endl;
cout<<"//==>Archivo : RuanoJharol-laedad.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Jharol"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//=================================================";
}

//--------------------------------------------------------------------------
//**************************************************************************

int RJ_cuentamoneda()
{
   int rj_x,rj_cm=0,rj_md=0,rj_mv=0,rj_mc=0;
   float rj_y,rj_m=0,rj_md1=0,rj_mv2=0,rj_mc3=0,rj_d=0.10, rj_v=0.25, rj_c=0.50;
   cout<<"Cantidad de monedas a ingresar "<<endl; 
   cin>>rj_x;
  do{
    cout<<"Ingrese la moneda:"<<endl;
	cin>>rj_y;
    rj_cm=rj_cm+1;
    rj_m=rj_m+rj_y;
    if(rj_y==rj_d){
        rj_md=rj_md+1;
        rj_md1=rj_md1+rj_y;
    }
      if(rj_y==rj_v){
          rj_mv=rj_mv+1;
          rj_mv2=rj_mv2+rj_y;
      }
       if(rj_y==rj_c){
          rj_mc=rj_mc+1;
          rj_mc3=rj_mc3+rj_y;
       }
  }while(rj_cm<rj_x);
cout<<" La cantidad de monedas ingresadas es de: "<<rj_cm<<endl;
cout<<" La suma total de las monedas es de: "<<rj_m<<" $"<<endl;
cout<<"//================================================"<<endl;
cout<<" La cantidad de moneda de 10cts es: "<<rj_md<<endl; 
cout<<" El total de la(s) moneda(s) de 10cts es: "<<rj_md1<<" $"<<endl;
cout<<"//================================================"<<endl;
cout<<" La cantidad de moneda de 25cts es: "<<rj_mv<<" cts"<<endl;
cout<<" El total de la(s) moneda(s) de 25cts es: "<<rj_mv2<<" $"<<endl;
cout<<"//================================================"<<endl;
cout<<" La cantidad de moneda de 50cts es: "<<rj_mc<<" cts"<<endl;
cout<<" El total de la(s) moneda(s) de 50cts es: "<<rj_mc3<<" $"<<endl;

cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Cuenta moneda"<<endl;
cout<<"//==>Archivo : RuanoJharol-cuentamoneda.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Jharol"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-17"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//=================================================";
return 0;
}

//--------------------------------------------------------------------------
//**************************************************************************



int RJ_menu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE RUANO JHAROL**************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NÚMEROS \n";
			cout<<"2.- COMPARA 2 NÚMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n";
			cout<<"4.- CALCULA EDAD. \n";
			cout<<"5.- MAQUINA CUENTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					cout<<"-------------------------------------------"<<endl;
					cout<<"\n SUMA DE VARIOS NÚMEROS "<<endl;
					RJ_sumaN();
					break;
				case 2:
					system("clear");
					cout<<"-------------------------------------------"<<endl;
					cout<<"\n COMPARAR 2 NÚMEROS "<<endl;
					RJ_compara();
					break;
				case 3:
					system("clear");
					cout<<"-------------------------------------------"<<endl;
					cout<<"\n PUNTO DE VENTA "<<endl;
				        RJ_puntoventa();
					break;
				case 4:
					system("clear");
					cout<<"-------------------------------------------"<<endl;
					cout<<"\n CALCULA LA EDAD "<<endl;
					RJ_edad();
					break;
				case 5:
					system("clear");
					cout<<"-------------------------------------------"<<endl;
					cout<<"\n MAQUINA CUENTA MONEDAS "<<endl;
					RJ_cuentamoneda();
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
