// Autores: Rene Balseca, Ruano Jharol, Ruano Joseph,
// Fecha de creación: 2022-05-22
// Fecha de ultima actualizacion: 2022-05-22


#include<iostream>
#include<stdlib.h>
using namespace std;
#include "rj_libreria.h"
#include "rb_libreria.h"
#include "ma_libreria.h"
#include "Joy_Libreria.h"
//#include "DD_libreria.h"




int main()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************Grupo PRO-001**************"<<endl<<endl;
			cout<<"1.- Programas de Rene Balseca. \n";
			cout<<"2.- Programas de Ruano Jharol.\n";
			cout<<"3.- Programas de Ruano Joseph. \n"; 
			cout<<"4.- Programas de Maroly Añapa. \n";
			cout<<"5.- Programas de integrante 5.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					//TRABAJO DEL INTEGRANTE 1.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO de Rene Balseca "<<endl;
					RB_menu();			
					break;
				case 2:
					//TRABAJO DEL INTEGRANTE 2.
				        cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO de Ruano Jharol "<<endl;
					RJ_menu();
					break;
				case 3:
					//TRABAJO DEL INTEGRANTE 3.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE Ruano Joseph "<<endl;
					RJ_Menu();
					break;
				case 4:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n AQUI PUEDO REVISAR LOS TRAAJO DE Maroly Añapa. "<<endl;
					ma_menu();
					break;
				case 5:
					//TRABAJO DEL INTEGRANTE 5.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DEL INTEGRANTE 5 "<<endl;
					break;
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
	}while(op!=0);
	
//	system("tree");

	return(0);

}

