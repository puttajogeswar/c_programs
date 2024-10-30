#include<stdio.h> 
void main(){
    int a,temp;
    printf("Enetr a value ");
    scanf("%d",&a);
 
    switch(a%2){
        case 1:printf("Odd");
        break;
        case 0:printf("Even");
         break;
        default:printf("invalid");
        break;
        
    }
}
