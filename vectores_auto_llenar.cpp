//Rellenar vectores dinamicamente y guardarlos en un archivo .txt
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//prototipo de funciones
void menu();
void vector_1000();
void vector_2000();
void vector_3000();
void vector_5000();
void vector_10000();

//puntero al archivo
FILE *archivo;
//Ruta del achivo
char* direccion = {"E:\\Universidad\\estructura de datos\\archivos\\vec_num.txt"};

//variables globales
int num[10000],n,menor,i,j,f,c;

int main (){
	
	menu();
	system("pause");
	return 0;
}


void menu(){
	
// doy las opciones del menu.
	int opcion, *pOpcion = &opcion;
	
	do{
		printf("1. Crear un archivo de texto con 1000 numeros. \n");
		printf("2. Crear un archivo de texto con 2000 numeros. \n");
		printf("3. Crear un archivo de texto con 3000 numeros. \n");
		printf("4. Crear un archivo de texto con 5000 numeros. \n");
		printf("5. Crear un archivo de texto con 10000 numeros. \n");
		printf("0. Exit");
		printf("\n");
		printf("ingrese una opcion: \n");
	    scanf("%d",&*pOpcion);
	    
		switch(*pOpcion) {
			
		case 1: vector_1000();
		break;
		case 2: vector_2000();
		break;
		case 3: vector_3000();
		break;
		case 4: vector_5000();
		break;
		case 5: vector_10000();
		break;
		case 0: exit(0);
		break;
		default: printf("Opcion invalida\n");
		}
		system("pause");
		system("cls");
	}while(*pOpcion != 0);
}


void vector_1000(){
	fflush(stdin); //baseo el buffer de entrada. Esto lo hago para borrar el contenido del archivo y remplasarlo con el nuevo.
	archivo = fopen (direccion,"w"); // apertura de archivo en modo write
	
	// pruevo que el archivo haya sido creado correctamente
	if(archivo == NULL){
		printf("Error al crear el archivo");
		
	}
	
	srand(time(NULL));
	f= 1000;
	
	// escribiendo en el archivo
	for (i=0;i<f;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d \n",num[i]);
		}
		
	//cierro el archivo
	fclose(archivo);	
	
	
	// Abro el archivo pero esta vez en modo read, y pregunto que si el archivo se puede abrir
	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se puede abrir el archivo");
		exit(1);
	}
	
	// Aca lee el archivo y lo muestra en pantalla
	for (i=0;i<f;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}


void vector_2000(){
	fflush(stdin);//baseo el buffer de entrada. Esto lo hago para borrar el contenido del archivo y remplasarlo con el nuevo.
	archivo = fopen (direccion,"w"); // apertura de archivo en modo write
	
	// pruevo que el archivo haya sido creado correctamente
	if(archivo == NULL){
		printf("Error al crear el archivo");
		
	}
	
	srand(time(NULL));
	f= 2000;
	
	// escribiendo en el archivo
	for (i=0;i<f;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d\n",num[i]);
		}
		
	//cierro el archivo	
	fclose(archivo);	
	
	// Abro el archivo pero esta vez en modo read, y pregunto que si el archivo se puede abrir
	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se puede abrir el archivo");
		exit(1);
	}
		
	for (i=0;i<f;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}


void vector_3000(){
		fflush(stdin);//baseo el buffer de entrada. Esto lo hago para borrar el contenido del archivo y remplasarlo con el nuevo.
	archivo = fopen (direccion,"w"); // apertura de archivo en modo write
	
	// pruevo que el archivo haya sido creado correctamente
	if(archivo == NULL){
		printf("Error al crear el archivo");
		
	}
	
	srand(time(NULL));
	f= 3000;
	
	// escribiendo en el archivo
	for (i=0;i<f;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d\n",num[i]);
		}
	
	//cierro el archivo
	fclose(archivo);	
	
	// Abro el archivo pero esta vez en modo read, y pregunto que si el archivo se puede abrir
	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se puede abrir el archivo");
		exit(1);
	}
	// Aca lee el archivo y lo muestra en pantalla	
	for (i=0;i<f;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}


void vector_5000(){
		fflush(stdin);//baseo el buffer de entrada. Esto lo hago para borrar el contenido del archivo y remplasarlo con el nuevo.
	archivo = fopen (direccion,"w"); // apertura de archivo en modo write
	if(archivo == NULL){
		printf("Error al crear el archivo");
		
	}
	
	srand(time(NULL));
	f= 5000;
	
	// escribiendo en el archivo
	for (i=0;i<f;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d\n",num[i]);
		}
	
	//cierro el archivo
	fclose(archivo);	
	
	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se puede abrir el archivo");
		exit(1);
	}
	// Aca lee el archivo y lo muestra en pantalla	
	for (i=0;i<f;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}


void vector_10000(){
		fflush(stdin);//baseo el buffer de entrada. Esto lo hago para borrar el contenido del archivo y remplasarlo con el nuevo.
	archivo = fopen (direccion,"w"); // apertura de archivo en modo write
	
	// pruevo que el archivo haya sido creado correctamente
	if(archivo == NULL){
		printf("Error al crear el archivo");
		
	}
	
	srand(time(NULL));
	f= 10000;
	
	// escribiendo en el archivo
	for (i=0;i<f;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d\n",num[i]);
		}
	
	//cierro el archivo	
	fclose(archivo);	
	
	// Abro el archivo pero esta vez en modo read, y pregunto que si el archivo se puede abrir
	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se puede abrir el archivo");
		exit(1);
	}
	// Aca lee el archivo y lo muestra en pantalla	
	for (i=0;i<f;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}
