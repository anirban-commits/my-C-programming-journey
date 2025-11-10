#include <stdio.h>
void sum(int *num1, int *num2, int *sum){
    *sum = *num1 + *num2;
}
int main(){
    int x, y, total;
    printf("=== Input from User ===");
    printf("\nEnter the first number:");
    scanf("%d", &x);
    printf("Enter the second number:");
    scanf("%d", &y);
    sum(&x, &y, &total);
    printf("\n=== Display of result ===");
    printf("\nThe sum of the %d and %d is %d",x, y, total);
    return 0;
}