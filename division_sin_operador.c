#include<stdio.h>

int Rec(int D, int d){
	
int cont = 0;

	if(D>=d){
	cont =1+Rec(D-d,d); 
	}	
	return cont;
}

int main(){
	
int D,d, cont;
	
printf("divsion de un numero sin operador: \n");

printf("escriba su dividendo: \n");
scanf("%d",&D);

printf("escriba su divisor: \n");
scanf("%d",&d);

cont = Rec(D,d);

printf("su divison es: %d",cont);

return 0;}
