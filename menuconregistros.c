//creditos a mariam.....
#include <stdio.h>
#include <string.h>

typedef struct{
    char titulo[50];
    char autor[50];
    int anopublic;
    char genero[50];
    int cantidad;
    
}libro;

typedef struct{

    char nombre[50];
    int codigo;
    char libroprestado[50];
    
}cliente;

int main(){

    libro libros[500];
    cliente clientes[500];
    int numlibros = 0;
    int i;
    int j;
    int numclientes = 0;
    char nomlibro[50];
    char nomcliente[50];
    int opcion;

 
 do{
        printf("\nMenu de opciones:\n");
        printf("1. Agregar libro\n");
        printf("2. Mostrar todos los libros\n");
        printf("3. Prestar libro\n");
        printf("4. Devolver libro\n");
        printf("5. Registrar cliente\n");
        printf("6. Salir del programa\n");
        printf("Seleccione una opcion: ");
        
        scanf("%d", &opcion);
       

        switch(opcion){
        
       
            case 1:
                printf("Ingresa el titulo del libro: \n");
                scanf("%s",libros[numlibros].titulo);
                printf("Ingresa el autor del libro: \n");
                scanf("%s",libros[numlibros].autor);
                printf("Ingresa el año de publicacion del libro: \n");
                scanf("%d",&libros[numlibros].anopublic);
                printf("Ingresa el ganero del libro: \n");
                scanf("%s",libros[numlibros].genero);
                printf("Ingresa la cantidad que hay del libro: \n");
                scanf("%d",&libros[numlibros].cantidad);
                printf("Libro añadido con exito");
                numlibros++;
            break;
            case 2:
                for(i=0;i<numlibros;i++){
                        printf("Titulo %s:\n",libros[i].titulo);
                        printf("Autor: %s\n", libros[i].autor);
                        printf("Año de publicacion : %d\n", libros[i].anopublic);
                        printf("Genero: %s\n", libros[i].genero);
                        printf("Cantidad: %d\n", libros[i].cantidad);
                        printf("\n");
                }
            break;
            case 3:
                
                printf("Ingresa tu nombre: \n");
                scanf("%s",nomcliente);
                for(j=0;j<numclientes;j++){
                    if(strcmp(clientes[j].nombre,nomcliente) == 0){
                        printf("Ingrese el nombre del libro que quieres prestar:\n");
                        scanf("%s",nomlibro);
                        for(i=0;i<numlibros;i++){
                            if(strcmp(libros[i].titulo,nomlibro) == 0){
                                if(libros[i].cantidad>0){
                                    libros[i].cantidad--;
                                    printf("libro prestado con exsito.\n");
                                    strcpy(clientes[j].libroprestado, nomlibro);
                                } else {
                                   printf("Este libro no esta disponible intenta prestarlo en otro tiempo\n");
                                }
                            } else {
                                printf("No existe un libro con este nombre\n");
                            }
                        }
                    }else {
                        printf("Este cliente no esta registrado\n");
                        printf("Por favor registrate antes de prestar un libro\n");
                    }
                    
                }
            break;
            case 4:
                printf("Ingresa tu nombre: \n");
                scanf("%s",nomcliente);
                for(j=0;j<numclientes;j++){
                    if(strcmp(clientes[j].nombre,nomcliente) == 0){
                        printf("Ingrese el nombre del libro que quieres devolver:\n");
                        scanf("%s",nomlibro);
                        for(i=0;i<numlibros;i++){
                            if(strcmp(libros[i].titulo,nomlibro) == 0){
                                if(strcmp(clientes[j].libroprestado,nomlibro) == 0){
                                    libros[i].cantidad++;
                                    printf("libro devuelto con exsito.\n");
                                    strcpy(clientes[j].libroprestado, "");
                                }else {
                                    printf("No has prestado ese libro\n");
                                }
                            } else {
                                printf("No existe un libro con este nombre\n");
                            }
                        }
                    }
                }
            break;
            case 5:
                printf("Ingresa tu nombre: \n");
                scanf("%s",clientes[numclientes].nombre);
                printf("Ingresa un codigo formado por numeros: \n");
                scanf("%d",&clientes[numclientes].codigo);
                printf("Cliente registrado con exsito\n");
                numclientes++;  
            break;
            case 6:
                printf("Saliendo del programa\n");
        }
        
     }while(opcion!=6);
   
    return 0;
}
/*
Agregar libros: Permitir a un administrador agregar nuevos libros a la biblioteca. Cada libro debe tener un título, autor,
año de publicación, género y una cantidad disponible en inventario.

Prestar libro: Permitir a los usuarios prestar un libro de la biblioteca. Debe verificar si el libro está disponible.
Si lo está, se debe disminuir la cantidad disponible en inventario. De lo contrario, mostrar un mensaje indicando que el libro no está disponible.

Devolver libro: Permitir a los usuarios devolver un libro prestado. Esto aumentará la cantidad disponible en inventario.

Buscar libro por título: Permitir a los usuarios buscar un libro por su título y mostrar su información 
(autor, año de publicación, género y cantidad disponible en inventario).

Mostrar todos los libros: Mostrar en pantalla los detalles de todos los libros en la biblioteca
(título, autor, año de publicación, género y cantidad disponible en inventario).

Salir del programa: Opción para salir del programa.
*/
