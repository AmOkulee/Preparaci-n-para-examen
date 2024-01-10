#include<stdio.h>

//intento con punteros y devolver valores

int cambiar(int *a, int *b, int c );

int main(){
	
	int x, y, z;
	
	x=12;
	y=4;
	z=2;
	
	z = cambiar (&x,&y, z);

	printf("los numeros son: x = %d, y = %d, z = %d.", x, y, z);
	
	
return 0;}

int cambiar(int *a, int *b, int c){

int aux;

aux = *a;
*a = *b;
*b = aux;
c =  111;

return c;
}
