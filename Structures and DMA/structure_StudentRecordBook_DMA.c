#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int sec;
    char group;
    int UID;
    float mst1Marks;
};
int main(){
    struct Student *studentNum;
    int num, i;
    printf("\n=== Input Section ===");
    printf("\nEnter the number of students:");
    scanf("%d", &num);
    if(num < 1){
        printf("Invalid count!");
        return 1;
    }
    studentNum = (struct Student*)malloc(num * sizeof(struct Student));
    if(studentNum == NULL){
        printf("Memory allocation FAILED!");
    }
    else {
        printf("Memory allocation is successfull for %d students at address %p", num, (void*)studentNum);
    }
    printf("\n\n=== Student Details input Section ===");
    for(i = 0; i < num; i++){
        printf("\nStudent %d:", i + 1);
        printf("\nName:");
        scanf("%49s", studentNum[i].name);
        printf("Section:");
        scanf("%d", &studentNum[i].sec);
        printf("Group:");
        scanf(" %c", &studentNum[i].group);
        printf("UID:");
        scanf("%d", &studentNum[i].UID);
        printf("Marks of MST 1 out of 20:");
        scanf("%f", &studentNum[i].mst1Marks);
    }
    printf("\n=== Display Student Details Section ===\n");
    printf("%-15s %-10s %-10s %-10s %-10s\n", "Name", "Section", "Group", "Section", "UID", "Marks of MST 1 (out of 20)");
    printf("------------------------------------------------------\n");
    for(i = 0; i < num; i++){
        printf("%-15s %-10d %-10c %-10d %-10.2f\n", 
            studentNum[i].name, 
            studentNum[i].sec, 
            studentNum[i].group, 
            studentNum[i].UID, 
            studentNum[i].mst1Marks);
    }
    free(studentNum);
    printf("\nMemory freed SUCCESSFULLY!");
    return 0;
}