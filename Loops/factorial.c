#include <stdio.h>
int main(){
    int num, i;
    unsigned long long factorial = 1;
    printf("Enter the number whose factorial is to be calculated:");
    scanf("%d", &num);
    if (num < 0 || num > 20){
        printf("Invalide Range! Enter a valid range (1 to 20).");
        return 1;
    }
    else {
        for (i = 1; i <= num; i++){
           factorial = factorial * i; 
        }
        printf("The factorial of %d is:%llu", num, factorial);
    }
    return 0;
}