#include <stdio.h>
int main(){
    int n, i = 1;
    printf("How many numbers you want to print:");
    scanf("%d", &n);
    printf("%d natural numbers are: ", n);
    while (i<=n){
        printf("%d ", i);
        i++;
    }
    return 0;
}