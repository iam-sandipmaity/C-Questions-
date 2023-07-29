// Q23. Write a program to find factorial of a number.

#include<stdio.h>
double Factorial (int n) {
    if(n < 2) {
        return 1;
    }
    return n * Factorial(n-1);
}
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("The FActorial Of %d Is : %.0f\n",n,Factorial(n));
    return 0;
}