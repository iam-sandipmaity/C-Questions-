// Q29. Find the sum of the digits for a 3 digit number and reverse the result.

#include<stdio.h>

int main() {
    int n;
    printf("enter n : ");
    scanf("%d",&n);

    int sum = 0, d , rev;

    while(n > 0) {
        d = n % 10;
        n = n/10;
        sum += d;
        rev = rev*10 +d;
    }
    printf("The Sum Of Digits Are : %d\n",sum);
    printf("The reverse Is :  %d\n",rev);

    return 0;
}
