#include <stdio.h>
int main(){
    char str[100], temp;
    int length = 0, i;
    printf("Enter the string:");
    while ((str[length] = getchar()) != '\n' && length < 99){
        length++;
    }
    str[length] = '\0';
    printf("Original String is:");
    for (i = 0; i < length; i++){
        putchar(str[i]);
    }
    for (i = 0; i <= length/2; i++){
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("\nThe reversed string is:");
    for (i = 0; i < length; i++){
        putchar(str[i]);
    }
    return 0;
}