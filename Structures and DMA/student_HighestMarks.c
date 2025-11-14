#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int sec;
    char group;
    int UID;
    float mst1Marks;
};
int main(){
    struct Student studentNum[2];
    int i;
    printf("\n=== Student Details input Section ===");
    for(i = 0; i < 2; i++){
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
    printf("%-15s %-10s %-10s %-10s %-10s\n", "Name", "Section", "Group", "UID", "Marks of MST 1 (out of 20)");
    printf("---------------------------------------------------------------------\n");
    for(i = 0; i < 2; i++){
        printf("%-15s %-10d %-10c %-10d %-10.2f\n", 
            studentNum[i].name, 
            studentNum[i].sec, 
            studentNum[i].group, 
            studentNum[i].UID, 
            studentNum[i].mst1Marks);
    }
    int highestMarksIndex = 0;
    float highestMarks = studentNum[0].mst1Marks;
    for(i = 0; i < 2; i++){
        if(studentNum[i].mst1Marks > highestMarks){
            highestMarks = studentNum[i].mst1Marks;
            highestMarksIndex = i;
        }
    }
    printf("\n=== Topper's Details ===");
    printf("\nName: %s",studentNum[highestMarksIndex].name);
    printf("\nUID: %d", studentNum[highestMarksIndex].UID);
    printf("\nClass: %d - %c", studentNum[highestMarksIndex].sec, studentNum[highestMarksIndex].group);
    return 0;
}