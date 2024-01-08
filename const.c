#include<stdio.h>
//en vez de usar #define PI 3.141592
  const double PI = 3.141592;
  int main(){
    double area;
    double radio = 12.45;
    area = PI*(radio * radio);
    printf("el area es %lf : ", area);	
return 0;}
