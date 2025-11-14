#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr, size, new_size;
    printf("\n=== Input Section ===\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (int*)malloc(size * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!");
    }
    else{
        printf("Memory allocation for %d elements is successfull at address %p", size, (void*)arr);
    }
    printf("\n\n=== Array Inputs ===\n");
    printf("Enter the %d elements of the array:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n=== Displaying Initial Array ===\n");
    printf("The initial array as per the inputs of user is: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n=== Reallocation Memory ===\n");
    printf("Enter the new size of the array: ");
    scanf("%d", &new_size);
    arr = (int*)realloc(arr, new_size * sizeof(int));
    if(arr == NULL){
        printf("Memory Re-allocation failed!");
    }
    else{
        printf("Memory re-allocation for %d elements is successfull at address %p", new_size, (void*)arr);
    }
    printf("\n\n=== New Array Inputs ===\n");
    printf("Enter the extra %d elements:\n", new_size - size);
    for(int i = size; i < new_size; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n=== Displaying Final Array ===\n");
    printf("The new array as per the inputs of user is: ");
    for(int i = 0; i < new_size; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
    printf("\n\nMemory freed SUCCESSFULLY!");
    return 0;
}