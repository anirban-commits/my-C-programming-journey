#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *str = NULL;
    int size, i;
    printf("\n=== Input Section ===\n");
    printf("Enter the length of the string:");
    scanf("%d", &size);
    if(size <= 0){
        printf("Invalid length of string!");
        return 1;
    }
    str = (char*)malloc((size + 1) * sizeof(char));
    if(str == NULL){
        printf("Memory allocation FAILED!");
    }
    else {
        printf("Memory allocation for a string of string length %d is successful at address %p", size, (void*)str);
    }
    while (getchar() != '\n');
    printf("\n\n=== Input of String ===\n");
    printf("Enter a string (max of %d characters):", size);
    fgets(str, size + 1, stdin);
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] == '\0';
    }
    printf("\n=== Display of the String ===\n");
    printf("The string is: %s", str);
    free(str);
    str = NULL;
    printf("\n\nMemory freed SUCCESSFULLY!");
    return 0;
}