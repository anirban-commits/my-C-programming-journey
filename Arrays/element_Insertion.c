#include <stdio.h>
int main(){
    int arr[100], size, position, value;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    if (size > 10 || size < 1){
        printf("Enter Valid size!");
    }
    else {
        printf("Enter the array elements:\n");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    printf("The array before insertion is:\n");
    for (int i = 0 ; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter the position of insertion:");
    scanf("%d", &position);
    printf("Enter the value of the insertion:");
    scanf("%d", &value);
    for (int i = size - 1; i <= position - 1; i--){
        arr[i+1] = arr[i];
    }
    arr[position - 1] = value;
    size++;
    printf("The array after insertion is:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}