// Q24. Check whether a given number is prime or not.

#include<stdio.h>

int main() {
    int n,count = 1;
    printf("Enter n : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please Enter A VAlid Input \n");
        exit(0);
    }
    for(int i =2 ; i < n; i++) {
        if (n % i == 0) {
            count++;
            break;
        }
    }
    
    if (count == 1) {
        printf("%d Is An Prime Number \n",n);
    }
    else {
        printf("%d Is Not An Prime Number \n",n);
    }
    return 0;
}