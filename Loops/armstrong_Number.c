#include <stdio.h>
#include <math.h>
int main(){
    int n = 0, num, orgnum, rem;
    double result = 0.0;
    printf("Enter the number:");
    scanf("%d", &num);
    orgnum = num;
    while (orgnum != 0){
        orgnum = orgnum/10;
        n++;
    }
    orgnum = num;
    while (orgnum != 0){
        rem = orgnum % 10;
        result = result + pow(rem,n);
        orgnum = orgnum/10;
    }
    if ((int)result == num){
        printf("The number %d is an ARMSTRONG number", num);
    }
    else {
        printf("The number %d is NOT an ARMSTRONG number", num);
    }
    return 0;
}