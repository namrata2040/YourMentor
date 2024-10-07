//program that uses break to exit a loop when a user enters a specific number
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number---Enter 0 to exit the loop ");
    while(num!=0){
        printf("\nEnter a number : ");
        scanf("%d",&num);
        printf("Entered number : %d",num);
        if(num==0){
            break;
        }
    }
    printf("\nEXIT");
    return 0;

    

}