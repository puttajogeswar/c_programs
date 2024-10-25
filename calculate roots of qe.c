#include <stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
    float r1,r2;
    printf("Enter a value ");
    scanf("%d",&a);
    printf("Enter b value ");
    scanf("%d",&b);
    printf("Enter c value ");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        r1=-b+sqrt(d/(2*a));
        r2=-b-sqrt(d/(2*a));
        printf("%f %f",r1,r2);
        printf("\n");
        printf("Real & distanct");
    }
    else if(d<0){
        
        printf("Real & imaginary");
    }
    else{
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("%f %f",r1,r2);
        printf("\n");
        printf("roots are equal");
    }
}
