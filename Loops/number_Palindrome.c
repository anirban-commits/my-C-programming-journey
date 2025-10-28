#include <stdio.h>
int main(){
    int num, orgnum, rem, rev = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    orgnum = num;
    while (num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    if (orgnum == rev){
        printf("%d is a palindrome\n", orgnum);
    }
    else {
        printf("%d is not a palindrome\n", orgnum);
    }
    return 0;
}