#include <stdio.h>
#include <math.h>
int main(){
    int num, isPrime = 1;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num <= 1){
        printf("%d is NOT a PRIME number", num);
    }
    else if (num == 2){
        printf("%d is a PRIME number", num);
    }
    else {
        for (int i = 3; i <= sqrt(num); i++){
            if (num % i == 0){
                isPrime = 0;
            }
        }
    }
    if (isPrime){
        printf("The number %d is a PRIME number", num);
    }
    else {
        printf("The number %d is NOT a PRIME number", num);
    }
    return 0;
}