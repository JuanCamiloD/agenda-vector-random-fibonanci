//agenda de contactos. 

#include <stdlib.h>
#include <stdio.h>


// estructuras
struct fecha{
	char dia[2];
	char mes[2];
	char anual[2];	
};
struct contacto{
	char nombre [30];
	char apellido [30];
	char telefono [30];
	char direccion[50];
	fecha creacion_fecha;

}contactos[100];

// variables globales 

char* direccion = {"E:\\Universidad\\estructura de datos\\archivos\\agenda.txt"};
char rpt;
char l=1;
int i;

// puntero hacia el archivo 
FILE* archivo;	

//Prototipo de funciones
void menu();
void agregar_contacto();
void ver_contactos();


int main(){
	
	int camilo, password,can=0;
	//password la agenda.
	camilo=12345;
	
    // intruducir el password tiene 3 intentos validos si no se cierra el programa.
    
	for(can=0 ; can<3;can++){
	
	printf("introduzca su contraseña señor Juan Camilo, tiene 3 intentos.\n");
	printf("intento # %d \n",can+1);
	scanf("%d",&password);
	system("cls");
	if(password==camilo){
		menu();
	}else {
		printf("contraseña incorrecta\n");
	}
}


	system("pause");
	return 0;
}

void menu(){
		int opc;
	
	do{
		printf("\n\t.:MENU:.\n");
		printf("\n1. Agregar contactos");
		printf("\n2. ver contactos");
		printf("\n3. exit");
		printf("\nOpcion: ");
		scanf("%d",&opc);
		printf("\n");
		
		switch(opc){
			case 1: agregar_contacto();
			system("cls");
			break;
			case 2: ver_contactos();
			system("cls");
			break;
			case 3: exit(l);
		}
		
		
	}while(opc != 3);
}

// guarda los datos primero en la estructura y despues se pasa al archivo
void agregar_contacto(){
	
	system("cls");
	
  	printf("\n\t.:Agregando contactos:.\n");
	
	do{
	
	archivo = fopen(direccion,"a+"); 
	
	if(archivo==NULL){
		printf("Error al tratar de crear el archivo");
		exit (l);
	}
		fflush(stdin);
		printf("\nNombre: ");
		gets(contactos[i].nombre);
		printf("\nApellidos: ");
		gets(contactos[i].apellido);
		printf("\nCelular: ");
		gets(contactos[i].telefono);
		printf("\ndireccion:");
		gets(contactos[i].direccion);
		printf("\nfecha de creacion del contacto:");
		printf("\nDia:");
		gets(contactos[i].creacion_fecha.dia);
		printf("\nMes:");
		gets(contactos[i].creacion_fecha.mes);
		printf("\nAño:");
		gets(contactos[i].creacion_fecha.anual);
	
		
		fprintf(archivo,"%s\n",contactos[i].nombre);
		fprintf(archivo,"%s\n",contactos[i].apellido);
		fprintf(archivo,"%s\n",contactos[i].telefono);
		fprintf(archivo,"%s\n",contactos[i].direccion);
		fprintf(archivo,"%s\n",contactos[i].creacion_fecha);
		fprintf(archivo,"\n",NULL);
	
	    printf("Desea agregar mas contactos si (s), no (n): ");
		scanf("%c",&rpt);
		
		i+1;
		
		fclose(archivo);
	}while(rpt == 's');
     
    system("pause");
}

// muestra los contactos directamente desde el archivo
void ver_contactos(){
	system("cls");
	int c;	
	archivo = fopen(direccion,"r");
	
	if(archivo == NULL){
		printf("Error al tratar de leer el archivo");
		exit (l);
	}
	 
	while((c=fgetc(archivo))!=EOF){
		if(c=='\n'){
			printf("\n");
		}
		else{
			putchar(c);
		}
	}
	system("pause");
}



