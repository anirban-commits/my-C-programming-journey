#include <stdio.h>
int main(){
    int arr[100], size, i, temp;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    if (size < 1 || size > 100){
        printf("Enter valid size!");
    }
    else {
        printf("Enter elements of the array:\n");
        for (i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    printf("The array before reversal:\n");
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    for (i = 0; i < size/2; i++){
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    printf("\nThe reversed array is:\n");
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}