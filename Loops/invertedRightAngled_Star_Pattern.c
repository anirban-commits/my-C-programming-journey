#include <stdio.h>
int main(){
    int row, i, j;
    printf("\n=== Input Section ===\n");
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("\n=== Display Section ===\n");
    for(i = 0; i < row; i++){
        for(j = row; j > i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}