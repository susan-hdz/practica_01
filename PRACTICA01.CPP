#include <stdio.h>
#include <stdlib.H>
int main(){
    float a,b,c;
    int opt;
    printf("1._suma\n2._resta\n3._multiplicacion\n4._division");
    printf("seleccione una operacion");
    scanf("%d",&opt);
    printf("ingrese el primer operando");
    scanf("%f",&a);
    printf("ingrese el segundo operando");
    scanf("%f",&b);
    if(opt==1){
        c=a+b;
    }
    else if(opt==2){
        c=a-b;
    }
    else if(opt==3){
        c=a*b;
    }
    else if (opt==4){
        while (b==0){
            printf("error, b debe ser distinto de 0");
            printf("introduce el segundo operando:");
            scanf ("%f",&b);
        }
        c=a/b;
    }
     else{
     printf("operacion invalida");
     c=0;
     }
     printf("el resultado es %f",c);
    }



