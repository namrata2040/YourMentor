//prints number from 1 to 20, skipping multiple of 3
#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=20;i++){
        if(i%3==0){
            goto skip;
            skip:
            printf("");
        }
        else{
            printf("%d ",i);
        }
    }
    return 0;
}