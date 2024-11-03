#include<stdio.h>
#include<math.h>

int main() {

    double a, b, c, x;
    double x1, x2;
    

    printf("Inserire l'equazione di secondo grado: "); //Per intendere 0 lasciare lo spazio vuoto, per 1 scriverlo//
    
    
    scanf ("%lf", &a);

    
    scanf ("%lf", &b);

    
    scanf ("%lf", &c);

    //scanf("%lf", &x);
    double d= b*b- 4*a*c;


    if(a==0) printf("Questa è un'equazione di primo grado \n");
    else;
     if(d < 0) printf("Non esiste soluzione reale \n ");
    else if(a==0&&b==0) printf("Ammette infinite soluzioni \n");
    else if((b*b-4*a*c) < 0) printf("Non esiste soluzione reale \n ");
    else {  
    x1= (-b+ sqrt(d))/ (2*a);
    x2= (-b- sqrt(d))/(2*a);
    printf("x1= %f \n", x1);
    printf("x2= %f \n", x2);
    }
    if(b!=0) printf("L'unica soluzione vale -c/b \n");
    else;
    if( (b*b-4*a*c) == 0) printf(" Esiste una soluzione reale \n ");
    else;
    if( (b*b-4*a*c) > 0) printf(" Esistono due soluzioni reali \n ");
    else;
    if((b*b-4*a*c) < 0) printf("Non esiste soluzione reale \n ");
    else;
    
    
    
    
    

    return 0;

}       






