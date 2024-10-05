#include <stdio.h>
int main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || (year%400==0)){
        printf("%d was a leap year",year);
    }else{
        printf("%d was not a leap year",year);
    }
    return 0;
}