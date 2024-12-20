#include <stdio.h>

void main() {
       int i,n;
       long int fact=1;
       printf("Enter n value ");
       scanf("%d",&n);
       for(i=1;i<=n;i++){
           fact=fact*i;
       }
       printf("%ld",fact);
}
