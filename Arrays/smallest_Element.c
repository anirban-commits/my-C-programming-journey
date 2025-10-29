#include <stdio.h>
int main(){
    int arr[100], size, smallest, i;
    printf("Enter the number of elements in the array:");
    scanf("%d", &size);
    if (size < 1 || size > 100){
        printf("Invalid size!");
    }
    else {
        printf("Enter the array elements:\n");
        for (i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    printf("The Array is:\n");
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    smallest = arr[0];
    for (i = 0; i < size; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("\nThe smallest number is:%d", smallest);
    return 0;
}