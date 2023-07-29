// Q28. Write down a program to display Fibonacci series up to 30 terms.


// //type 1 (Using loop)
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter n : ");
//     scanf("%d",&n);
//     int t1 = 0,t2 = 1,t3;
//     printf("The Fibonacci Series Is : \n");
//     printf("%d  %d  ",t1,t2);
//     for(int i = 1 ; i <= n ; i++) {
//         t3 = t1 + t2;
//         printf("%d  ",t3);
//         t1 = t2;
//         t2 = t3;
//     }
//     return 0;
// }

// type 2 (using function)
#include<stdio.h>
int fib(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}
int main() {
    int num;
    printf("Enter n : ");
    scanf("%d",&num);
    printf("The Fib Number Of %d Is : %d",num,fib(num));
    return 0;
}