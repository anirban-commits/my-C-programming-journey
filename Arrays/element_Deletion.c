#include <stdio.h>
int main(){
    int arr[100], size, deleted_element, position, i;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    if (size < 1 || size > 100){
        printf("Enter valid size");
    }
    else {
        printf("Enter the array elements:\n");
        for (i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    printf("The Array before deletion is:\n");
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter the position of the element to be deleted:");
    scanf("%d", &position);
    if (position < 1 || position > size){
        printf("Enter valid position");
        return 0;
    }
    deleted_element = arr[position - 1];
    for (i = position - 1; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;
    printf("The array after deletion is:\n");
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\nThe deleted element is:%d", deleted_element);
    return 0;
}