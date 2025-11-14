#include <stdio.h>
int main(){
    int row, i, j, space;
     printf("\n=== Input Section ===\n");
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("\n=== Display Section ===\n");
    for(i = 1; i <= row; i++){
        for(space = 1; space <= row - i; space++){
            printf("  ");
        }
        for(j = 0; j < 2 * i - 1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}