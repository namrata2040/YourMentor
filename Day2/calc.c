//calculator using switch
#include <stdio.h>
int main(){
    int a,b,sum,sub,mul,div;
    
    printf("\nEnter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    int operator;
    printf("Enter (1) for addition\nEnter (2) for subtraction\nEnter (3) for multiplication\nEnter (4) for division\n");
    scanf("%d",&operator);
    switch(operator){
        case 1: 
        printf("a + b = %d",sum);
        break;
        case 2:
        printf("a - b = %d",sub);
        break;
        case 3:
        printf("a * b = %d",mul);
        break;
        case 4:
        printf("a / b = %d",div);
        break;
        default:
        printf("Invalid Operator");
    }
    return 0;
}