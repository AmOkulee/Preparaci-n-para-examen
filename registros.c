typedef struct fecha{
    int dia;
    int mes;
    int año;

}Tfecha;


typedef struct Producto{
    int referencia;
    char nombre[5];

}Tproducto;


typedef struct Factura{
    char DNI[9];
    Tfecha fecha;
    char Nombre[5];
    int NumFact;
    Tproducto Producto;
    int numALT;

}Tclientes;


//funcion para llenar datos de la factura.
int main(){

   Tclientes factura;

    printf("hola llenaremos tu factura\n");
    printf("ponga su dni: \n");
    scanf("%s",factura.DNI);
    printf("ponga la fecha, dia, mes y año(con puntico al final): \n");
    scanf("%d %d %d\n", &factura.fecha.dia, &factura.fecha.mes, &factura.fecha.año);
    printf("nombre del cliente: \n");
    scanf("%s", factura.Nombre);
    printf("numero de fastura \n");
    scanf("%d", &factura.NumFact );
    printf("Producto nombre: \n");
    scanf("%s", factura.Producto.nombre);
    printf("numero aleatorio: \n");
    scanf("%d", &factura.numALT);


    printf("osea, vale %s\n", factura.DNI );
    printf("osea, vale %d, %d , %d\n", factura.fecha.dia, factura.fecha.mes, factura.fecha.año);
    printf("osea, vale %s\n", factura.Nombre);
    printf("osea, vale %d\n", factura.NumFact );
    printf("osea, vale %s\n", factura.Producto.nombre);
    printf("osea, vale %d\n", factura.numALT);
}
