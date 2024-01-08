#include<stdio.h>
int main(){
 int num; // variable num
 int *pNum; // puntero a dirección de memoria
 num = 5; // se asigna el valor 5 a num
 pNum = &num; // dirección de memoria de num
// Las dos sentencias siguientes imprimen el valor de num
 printf("num: %d\n", num);
 printf("*pNum: %d\n", *pNum);
 // Las dos sentencias siguientes imprimen la dirección de memoria de num
 printf("pNum: %p\n", pNum); 
 printf("&num: %p\n", &num);
 return 0;
 }
