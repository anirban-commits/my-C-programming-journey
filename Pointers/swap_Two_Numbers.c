#include <stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x, y;
    printf("\n=== User Input Section ===");
    printf("\nEnter the first number:");
    scanf("%d", &x);
    printf("Enter the second number:");
    scanf("%d", &y);
    printf("\n=== Before Swapping ===");
    printf("\nThe value of x = %d and y = %d", x, y);
    swap(&x, &y);
    printf("\n\n=== After swapping ===");
    printf("\nThe value of x = %d and y = %d", x, y);
    return 0;
}