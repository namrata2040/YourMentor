#include <stdio.h>

int main() {
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact=1;
    for(int i=2; i<=n; i++) {
        fact = fact * i;
    }
    printf("factorial of %d is %d",n,fact);

    return 0;
}