#include<stdio.h>
void main(){
    int i,n,count=0;
    printf("Enter number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count=count+1;
        }
    }
if(count==2){
     printf(" Given Number is  a Prime number");
    
}
else{
     printf(" Given Number is Not a Prime number");
}
}
    
