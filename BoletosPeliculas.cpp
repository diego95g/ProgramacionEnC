#include <iostream> // cout, cin

using namespace std; // iostream 

/*PROGRAMA PARA REGISTRAR PELICULAS Y VENTA DE BOLETOS DE ASIENTOs
CORRESPONDIENTES A LAS FUNCIONES REGISTRADAS*/

#define NUM_PELICULAS 50 
#define ASIENTOS 40 
#define NOMBRE_PELICULA 40



// prototipos de funciones

// variable global


int main(){
	// arreglo: es un conjunto de valores del mismo tipo
	// 2 tipos de arreglos
	// arreglos unidimensionales int nums[tam];
	// arreglos bidimensionales int matriz[tam][tam];
	// utilizar variables locales: int nums, sueldos
	// utilizar variables globales constantes
	int op=0;
	int indicePeliculas=0;
	char peliculas[NUM_PELICULAS][NOMBRE_PELICULA];
	float asientos[NUM_PELICULAS][ASIENTOS];
	for(int i=0; i<NUM_PELICULAS; i++){ // filas de la matriz -> i
		for(int j=0; j<ASIENTOS; j++){ // columnas de la matri< -> j
			asientos[i][j]=0.0;
		}
	}
	
	do{
		system("cls"); // limpiar la pantalla
		// uso del cin y cout
		// cout: mostrar mensajes en pantalla -> printf("%d %f",num,sueldo); \n
		// cin: almacenar valores que introduzco por teclado -> scanf();
		cout<<endl<<"MENU DE OPCIONES"; // endl: end line
		cout<<endl<<"1. Registrar pelicula";
		cout<<endl<<"2. Visualizar disponibilidad peliculas";
		cout<<endl<<"3. Registro de la venta de asiento";
		cout<<endl<<"6. Salir del programa";
		cout<<endl<<"Ingresa una opcion: ";
		cin>>op; // a partir de op construyo el switch , case
		
		switch(op){
			case 1:
				system("cls"); // limpiar la pantalla
				cout<<endl<<"REGISTRA LA PELICULA";
				cout<<endl<<"--------------------"<<endl;
				// CONSTRUIR EL INGRESO DE PELICULA
				fflush(stdin); // borrar el buffer del teclado (memoria que almacena lo que yo ingreso)
				cout<<endl<<"Ingresa el nombre de la pelicula: ";
							// cin: guardar la cadena hasta que encuentra un espacio en blanco, 
							// gets : almacenar cadenas de caracteres con espacios
							//cin>>peliculas[indicePeliculas];
				gets(peliculas[indicePeliculas]);
				indicePeliculas++; // =1, =2, =3, =4
				system("pause");
				break;
			case 2:
				system("cls"); // limpiar la pantalla
				cout<<endl<<"VISUALIZAR PELICULAS";
				cout<<endl<<"--------------------"<<endl;
				// LLAMARA A LA FUNCION VISUALIZAR
				cout<<endl<<"Nro.\tNombre pelicula";
				cout<<endl<<"----\t---------------";
				// Adultos: 6.00
				// niños: 4.00
				// vacio: 0.00
				// for(inicializacion; condicion; incremente/decremento)
				for(int i=0; i<indicePeliculas; i++){ // filas -> i
					cout<<endl<<endl<<i+1<<"\t"<<peliculas[i]<<endl; // nombre de la pelicula
					for(int j=0; j<ASIENTOS; j++){
						//cout<<"["<<determinarTipoBoleto(asientos[i][j])<<"] - ";
						if((j+1)%10==0){
							cout<<endl;
						}
					}
				}
				cout<<endl;
				system("pause");
				break;
			case 3:
				system("cls"); // limpiar la pantalla
				cout<<endl<<"VENTA DE BOLETOS";
				cout<<endl<<"----------------"<<endl;
				// LLAMARA A LA FUNCION VISUALIZAR
				int numPelicula=0;
					int asiento=0;
					char tipoBoleto=' ';
					char pregunta=' ';
					fflush(stdin);
					
					 // imprimir peliculas y asientos para que el cliente pueda escoger
					/*
					0:1 Era Hielo
					1:2 Sr sdsa
					2:3 fdffsd
					*/
					cout<<endl<<"Ingresa el numero de pelicula: ";
					cin>>numPelicula;
					
					do{
						cout<<endl<<"Que tipo de boleto desea <a:adulto | n:ninio>"; // adulto 6.0 y niño 4.0
						cin>>tipoBoleto; // a, n es la que ingreso en este momento
					
					cout<<endl<<"Ingrese el asiento que desee <1-40>: ";
					cin>>asiento;
					
					if(tipoBoleto=='a'){
						asientos[numPelicula-1][asiento-1]=6.0;
					}
					if(tipoBoleto=='n'){
						asientos[numPelicula-1][asiento-1]=4.0;
					}
					cout<<endl<<"Desea comprar otro boleto? <s:si | n:no>";
					cin>>pregunta;
				}while(pregunta!='n');
			
						system("pause");
				break;
			
		}
		
		
	}while(op!=6);
	
	
	return 1;
}






