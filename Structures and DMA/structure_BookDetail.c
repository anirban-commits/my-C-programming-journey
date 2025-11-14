#include <stdio.h>
#include <stdlib.h>
struct bookDetail{
    char name[50];
    char authorName[50];
    float price;
    int pages;
};
int main(){
    struct bookDetail library[3];
    int i;
    printf("\n=== Data Input ===");
    for(i = 0; i < 3; i++){
        printf("\nBook %d:", i + 1);
        printf("\nName:");
        scanf("%49s", library[i].name);
        printf("Author's name:");
        scanf("%49s", library[i].authorName);
        printf("Price:");
        scanf("%f", &library[i].price);
        printf("Pages:");
        scanf("%d", &library[i].pages);
    }
    printf("\n=== Displaying the Book details ===\n");
    printf("%-20s %-20s %-10s %-10s\n","Name", "Author's name", "Price", "Pages");
    printf("----------------------------------------------------------\n");
    for (i = 0; i < 3; i++){
        printf("%-20s %-20s %-10.2f %-10d\n",library[i].name, library[i].authorName, library[i].price, library[i].pages);
    }
    return 0;
}