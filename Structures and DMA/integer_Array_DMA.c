#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    int size, i;
    printf("\n=== Input Section ===");
    printf("\nEnter the number of elements in array:");
    scanf("%d", &size);
    if(size < 1){
        printf("Invalid range!");
        return 1;
    }
    arr = (int*)malloc(size * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    else{
        printf("Memory allocation successfull at address %p", (void*)arr);
    }
    printf("\n\n=== Input the Array elements ===");
    printf("\nEnter %d elements of the array:\n", size);
    for(i = 0; i < size; i++){
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n=== Display the Array elements ===");
    printf("\nElement 1\tElement 2\tElement 3\tElement 4\tElement 5");
    printf("\n---------\t---------\t---------\t---------\t---------\t\n");
    for(i = 0; i < size; i++){
        printf("%d\t\t", arr[i]);
    }
    free(arr);
    printf("\n\nMemory freed SUCCESSFULLY!");
    return 0;
}