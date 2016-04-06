#include <stdio.h>

double raiz_quadrada(double numero);

int main(){ 

    double numero;
    
    printf("Entre com um número positivo : ");
    scanf("%lf",&numero);
    
    printf("A raiz quadrada de %.3f é %.5f \n",numero ,raiz_quadrada(numero) );

    return 0;
}


double raiz_quadrada (double numero){

    int n;
    double a = numero;
    
    for (n = 0; n < 10; ++n)
          a = a/2 + numero/(2*a);
            
    return(a);    
}   
