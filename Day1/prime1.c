//prime numbers till n
#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Prime numbers till %d : ",n);
    for(int i=2;i<=n;i++){
        int isPrime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if (isPrime){
            printf("%d ",i);
        }
    }

    return 0;
}