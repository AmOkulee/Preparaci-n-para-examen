#include<stdio.h>

int main(){
int num;
  int matriz[4][4]={{1,2,3,4},
                    {5,6,7,8},
                   {9,0,11,22},
                  {33,44,55,66}};
  
printf("digite un numero para buscar en la matriz: \n");
scanf("%d", num);
  
  int i,j;
  int f = -1;
  int c = -1;
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      if(matriz[i][j] == num){
        break;
        f = i+1;
        c = j+1;
      }
    }if(c! =-1){
      break;
    }
  }
  if(c == -1 && f == -1){

    printf("su numero no fue encontrado \n" );
  }else {
printf("el dato se encuentra en la fila %d, y en la columna %d \n", f, c);
    
  }
return 0;}
