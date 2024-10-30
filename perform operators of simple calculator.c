#include <stdio.h>

int main() {
    int a,b;
    char ch;
    printf("Enter a  b values and operator ");
    scanf("%d%d %c",&a,&b,&ch);
    
    switch(ch){
        case '+':printf("Add %d",a+b);
        break;
        case '-':printf("subtraction %d",a-b);
        break;
        case '*':printf("Multiplication %d",a*b);
        break;
        case '/':printf("Division %d",a/b);
        break;
        case '%':printf("Remainder %d",a%b);
        break;
        default:printf("Invalid operatior");
        break;
    }
}
