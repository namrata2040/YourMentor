//uses goto to skip negative number and prints positive number
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number---Enter 0 to exit the loop\n");
    while(num!=0){
        printf("Enter a number : ");
        scanf("%d",&num);
        
        if(num>0){
            printf("Positive number : %d\n",num);
        }
        if(num<0){
            goto skip;
            skip:
            printf("SKIP\n");
        }
        if(num==0){
            break;
        }
        
        

    
    }
    printf("EXITED\n");
    return 0;
    

}