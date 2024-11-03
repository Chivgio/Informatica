#include<stdio.h>
#include<math.h>

double a, b, c, x;

double d, x1, x2;
int main() {

   
  printf("Inserire prima cifra: \n");
   scanf("%lf", &a);
   printf("Inserire seconda cifra: \n");
   scanf("%lf", &b);
   printf("Inserire terza cifra: \n");
   scanf("%lf", &c);

    //Non inserire la x nell'immissione delle cifre//
    

    

    //Per intendere 0 lasciare lo spazio vuoto, per 1 scriverlo//
    
   

    
  

    int d= b*b- 4*a*c;

     

     
    
    if(a==0) printf("Questa è un'equazione di primo grado \n");
    else;
   

    double x1, x2;

     if(a==0 && b==0) printf("Ammette infinite soluzioni \n");
    else if(d < 0) printf("Non esiste soluzione reale \n ");
    else  if(a==0 && b!=0) printf("L'unica soluzione vale -a/b \n");
    else;
    
    if( d > 0) printf(" Esistono due soluzioni reali \n ") ;
    x1= (-b+ sqrt(d))/ (2*a);
    x2= (-b- sqrt(d))/(2*a);
    printf("x1= %lf \n", x1);
    printf("x2= %lf \n", x2);
    
    if( d == 0) printf(" Esiste una soluzione reale \n ");
    else;
    
   
   
    
    

    return 0;

}       






