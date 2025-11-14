#include <stdio.h>
int main(){
    int row, i, j, number = 1;
    printf("\n=== Input Section ===\n");
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("\n=== Display Section ===\n");
    for(i = 1; i <= row; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}