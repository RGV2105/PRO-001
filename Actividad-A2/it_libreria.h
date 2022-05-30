// funciones implementadas para Isaac Alejandro Tafur León

//


int itCompara(){
	
	
	int IS_a,IS_b; 
 
	cout<< "El numero que vas a comparar"<<endl;
	cin>>IS_a;
	cin>>IS_b;
	if(IS_a==IS_b){
	cout<<"Ambos numeros son iguales"<<endl;
	}
		
	else{
		if(IS_a<IS_b){
			cout<<"El numero mayor es: "<<IS_b<<endl;
			cout<<"El numero menor es: "<<IS_a<<endl;
		}
		else{
			cout<<"El numero mayor es :"<<IS_a<<endl;
			cout<<"El numero menor es :"<<IS_b<<endl;
		}	
	}
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: La comparacion de 2 numeros"<<endl;
cout<<"//==>Archivo : TafurIsaac-Compara.cpp"<<endl;
cout<<"//==>Autor: Isaac Alejandro Tafur León"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";


	
	return 0;
}
	
int itCuentaMonedas(){
	
	
	
	int IS_di,IS_ve,IS_ci;
	float IS_diez,IS_vein,IS_ciq,IS_total;
	
	cout<<"cuantas monedas de 10ctv son"<<endl;
	cin>>IS_di;
	cout<<"cuantas monedas de 25ctv son"<<endl;
	cin>>IS_ve;
	cout<<"cuantas monedas de 50ctv son"<<endl;
	cin>>IS_ci;
	
	IS_diez=IS_di*0.10;
	IS_vein=IS_ve*0.25;
	IS_ciq=IS_ci*0.50;
	IS_total=IS_diez+IS_vein+IS_ciq;
	
	cout<<"el tolal de las monedas de 10ctv es: $"<<IS_diez<<endl;
	cout<<"el tolal de las monedas de 25ctv es: $"<<IS_vein<<endl;
	cout<<"el tolal de las monedas de 50ctv es: $"<<IS_ciq<<endl;
	cout<<"el valor total es: $"<<IS_total<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==>Archivo : TafurIsaac-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Isaac Alejandro Tafur León"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";
	
	return 0;
}

int itLaEdad(){
	
	
	int IS_aa,IS_an,IS_da,IS_dn,IS_edad,IS_ma,IS_mn;
	cout<<"ingrese su fecha actual"<<endl;
	cout<<"formato de dia, mes, año"<<endl;
		cin>> IS_da;
		cin>> IS_ma;
		cin>> IS_aa;	
	cout<<"ingrese su fecha de nacimiento"<<endl;
	cout<<"formato de dia, mes, año"<<endl;
		cin>> IS_dn;
		cin>> IS_mn;
		cin>> IS_an;
	
	IS_edad=IS_aa-IS_an;
	
	if(IS_ma<IS_mn){
		IS_edad=IS_edad-1;
	}
	else{
		if(IS_ma==IS_mn){
			if(IS_da<IS_dn)
			IS_edad=IS_edad-1;
			
		}
		else{
			if(IS_dn==IS_da){
				cout<<"felicidades es tu cumpleaños"<<endl;
			}
		}
	}
	if(IS_edad<0){
		cout<<"no se puede carcular la edad";
	}
		else{
			IS_edad=IS_edad-1;
			cout<<"tu edad es: "<<IS_edad<<endl;
		}

cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: la edad de una persona"<<endl;
cout<<"//==>Archivo : TafurIsaac-Laedad.cpp"<<endl;
cout<<"//==>Autor: Isaac Alejandro Tafur León"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";
	return 0;
}

int itPuntoVenta(){

	int IS_i=0;
	float IS_num,IS_des,IS_iva,IS_subt,IS_t,IS_total;

	cout<<"cuantos productos vas a reregistrar para tu factura"<<endl;
	cin>>IS_i;

	do {
		
	cout<< "cual es el valor de los productos:"<<endl;
		cin>>IS_num;
		IS_t=IS_num+IS_t;
		IS_i--;

		}while(IS_i>0);	


		cout<<"porsentaje del descueno"<<endl;
		cin>>IS_des;
	if (IS_des>1){
		IS_des=IS_t*IS_des/100;
		IS_subt=IS_t-IS_des;
	}
	else{
		IS_subt=IS_t;
	}

	IS_iva=IS_subt*12/100;
	IS_total=IS_subt+IS_iva;
	
	cout<<"el subtotal es: $"<<IS_subt<<endl;
	cout<< "el descuento es de: $"<<IS_des<<endl;
	cout<<"el iva es: $"<<IS_iva<<endl;
	cout<< "total de la factura es: $"<<IS_total<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: factura"<<endl;
cout<<"//==>Archivo : TafurIsaac-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Isaac Alejandro Tafur León"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";

	
	return 0;
}

int itSumaN(){
	
	int IS_i=0,IS_a,IS_s;
	cout<<"cuantos numeros va a sumar"<<endl;
	cin>>IS_i;

	do {
		
	cout<< "cual es el numero q vas a sumar:"<<endl;
		cin>>IS_a;
		IS_s=IS_s+IS_a;
		IS_i--;
	}while(IS_i>0);
		
	cout<<"el resultado de la suma es: " <<IS_s<<endl;
	
cout<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: La comparacion de 2 numeros"<<endl;
cout<<"//==>Archivo : TafurIsaac-SumaN.cpp"<<endl;
cout<<"//==>Autor: Isaac Alejandro Tafur León"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-03-20"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-18"<<endl;
cout<<"//=================================================";
	
	
	return 0;
}


int it_menu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE  Alejandro Tafur **************"<<endl<<endl;
			cout<<"1.- SUAT VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA EDAD. \n";
			cout<<"5.- MAQUINA CUENTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable opp siver para la opcion a escoger
			switch(op){
				case 1:
					system("clear");
					itSumaN();			
					break;
				case 2:
					system("clear");
					
					itCompara();
					break;
				case 3:
					system("clear");
					itPuntoVenta();
					break;
				case 4:
					system("clear");
					itLaEdad();
					break;
				case 5:
					system("clear");
					itCuentaMonedas();
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
