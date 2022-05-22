// funciones implementadas para RENE BALSECA

//


int RBCompara(){
	
	int RB_a,RB_b; 
 
	
	cout<< "que numero vas a comparar"<<endl;
	cin>>RB_a;
	cin>>RB_b;
	if(RB_a==RB_b){
	cout<<"abos numeros son iguales"<<endl;
	}
		
	else{
		if(RB_a<RB_b){
			cout<<"El numero mayor es: "<<RB_b<<endl;
			cout<<"El numero menor es: "<<RB_a<<endl;
		}
		else{
			cout<<"El numero mayor es: "<<RB_a<<endl;
			cout<<"El numero menor es: "<<RB_b<<endl;
		}	
	}
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: La comparacion de 2 numeros"<<endl;
cout<<"//==>Archivo : ReneBalseca_compara.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";

	return 0;
}
	
int RBCuentaMonedas(){
	
	int RB_di,RB_ve,RB_ci;
	float RB_diez,RB_vein,RB_ciq,RB_total;
	
	cout<<"cuantas monedas de 10ctv son"<<endl;
	cin>>RB_di;
	cout<<"cuantas monedas de 25ctv son"<<endl;
	cin>>RB_ve;
	cout<<"cuantas monedas de 50ctv son"<<endl;
	cin>>RB_ci;
	
	RB_diez=RB_di*0.10;
	RB_vein=RB_ve*0.25;
	RB_ciq=RB_ci*0.50;
	RB_total=RB_diez+RB_vein+RB_ciq;
	
	cout<<"el tolal de las monedas de 10ctv es: $"<<RB_diez<<endl;
	cout<<"el tolal de las monedas de 25ctv es: $"<<RB_vein<<endl;
	cout<<"el tolal de las monedas de 50ctv es: $"<<RB_ciq<<endl;
	cout<<"el valor total es: $"<<RB_total<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==>Archivo : ReneBalseca_CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";
	
	return 0;
}

int RBLaEdad(){
	int RB_aa,RB_an,RB_da,RB_dn,RB_edad,RB_ma,RB_mn;
	cout<<"ingrese su fecha actual"<<endl;
	cout<<"formato de dia, mes, año"<<endl;
		cin>> RB_da;
		cin>> RB_ma;
		cin>> RB_aa;	
	cout<<"ingrese su fecha de nacimiento"<<endl;
	cout<<"formato de dia, mes, año"<<endl;
		cin>> RB_dn;
		cin>> RB_mn;
		cin>> RB_an;
	
	RB_edad=RB_aa-RB_an;
	
	if(RB_ma<RB_mn){
		RB_edad=RB_edad-1;
	}
	else{
		if(RB_ma==RB_mn){
			if(RB_da<RB_dn)
			RB_edad=RB_edad-1;
			
		}
		else{
			if(RB_dn==RB_da){
				cout<<"felicidades es tu cumpleaños"<<endl;
			}
		}
	}
	if(RB_edad<0){
		cout<<"no se puede carcular la edad";
	}
		else{
			RB_edad=RB_edad-1;
			cout<<"tu edad es: "<<RB_edad<<endl;
		}

cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: la edad de una persona"<<endl;
cout<<"//==>Archivo : ReneBalseca_PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";

	return 0;
}

int RBPuntoVenta(){

	int RB_i=0;
	float RB_num,RB_des,RB_iva,RB_subt,RB_t,RB_total;

	cout<<"cuantos productos vas a reregistrar para tu factura"<<endl;
	cin>>RB_i;

	do {
		
	cout<< "cual es el valor de los productos:"<<endl;
		cin>>RB_num;
		RB_t=RB_num+RB_t;
		RB_i--;

		}while(RB_i>0);	


		cout<<"porsentaje del descueno"<<endl;
		cin>>RB_des;
	if (RB_des>1){
		RB_des=RB_t*RB_des/100;
		RB_subt=RB_t-RB_des;
	}
	else{
		RB_subt=RB_t;
	}

	RB_iva=RB_subt*12/100;
	RB_total=RB_subt+RB_iva;
	
	cout<<"el subtotal es: $"<<RB_subt<<endl;
	cout<< "el descuento es de: $"<<RB_des<<endl;
	cout<<"el iva es: $"<<RB_iva<<endl;
	cout<< "total de la factura es: $"<<RB_total<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: factura"<<endl;
cout<<"//==>Archivo : ReneBalseca_PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";

	return 0;
}

int RBSumaN(){
	
	int RB_i=0,RB_a,RB_s;
	cout<<"cuantos numeros va a sumar"<<endl;
	cin>>RB_i;

	do {
		
	cout<< "cual es el numero q vas a sumar:"<<endl;
		cin>>RB_a;
		RB_s=RB_s+RB_a;
		RB_i--;
	}while(RB_i>0);
		
	cout<<"el resultado de la suma es: " <<RB_s<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: La comparacion de 2 numeros"<<endl;
cout<<"//==>Archivo : ReneBalseca_SumaN.cpp"<<endl;
cout<<"//==>Autor: Carlos Rene Balseca Nevarez"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";
	
	return 0;
}


int RB_menu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE PATA JENIFFER**************"<<endl<<endl;
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
					RBSumaN();			
					break;
				case 2:
					system("clear");
					
					RBCompara();
					break;
				case 3:
					system("clear");
					RBPuntoVenta();
					break;
				case 4:
					system("clear");
					RBLaEdad();
					break;
				case 5:
					system("clear");
					RBCuentaMonedas();
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
