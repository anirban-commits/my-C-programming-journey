#include <stdio.h>
int main(){
    int arr[100], size, i, largest, second_largest;
    printf("Enter the number of elements in the array:");
    scanf("%d", &size);
    if (size < 2 || size > 100){
        printf("INVALID size!");
    }
    else {
        printf("Enter the elements of the array:\n");
        for (i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    printf("The array is:\n");
    for (i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
    largest = arr[0];
    second_largest = arr[1];
    for (i = 0; i < size; i++){
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
    printf("\nThe second largest number is:%d", second_largest);
    return 0;
}