#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a value ");
    scanf("%d",&a);
    printf("Enter b value ");
    scanf("%d",&b);
    printf("Enter c value ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is large %d",a);
        }
    }
    else if(b>c)
    {
        printf("b is large %d ",b);
    }
    else{
        printf("c is large %d",c);
    }
}
