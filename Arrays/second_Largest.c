#include <stdio.h>
#include <limits.h>
int secondlargest(int arr[], int n){
    if (n < 2) return INT_MIN;
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else {
            if (arr[i] > second_largest && arr[i] != largest){
                second_largest = arr[i];
            }
        }
    }
    return second_largest;
}
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    if(n < 2){
        printf("Error! 2 or more elemets required");
        return 0;
    }
    int arr[n];
    printf ("Enter %d elements:", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int result = secondlargest(arr, n);
    if (result == INT_MIN){
        printf("There is no second largest element.\n");
    }
    else {
        printf("The second largest element is %d", result);
    }
    return 0;
}