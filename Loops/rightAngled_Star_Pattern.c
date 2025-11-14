#include <stdio.h>
int main(){
    int rows, i, j;
    printf("\n=== Input Section ===\n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\n=== Display Section ===\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}