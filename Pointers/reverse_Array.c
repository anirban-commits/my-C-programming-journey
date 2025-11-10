#include <stdio.h>
void reverseArray(int *arr, int size){
    int i, tmp;
    for(i = 0; i < size/2; i++){
        tmp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = tmp;
    }
}
void displayArray_index(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[100], size, i;
    printf("\n=== Input Section ===");
    printf("\nEnter the number of elements in array:");
    scanf("%d", &size);
    if(size > 100 || size < 1){
        printf("\nInvalid Range!");
        return 1;
    }
    else{
        printf("Enter %d elements of the array:\n", size);
        for(i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    printf("\n=== Displaying Original Array ===\n");
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    reverseArray(arr, size);
    printf("\n\n=== Displaying Reversed Array ===\n");
    displayArray(arr, size);
    return 0;
}