// Q25. Find the sum of consecutive 50 prime numbers.

#include<stdio.h>

int main() {
    int a,b;
    int i , sum = 0;
    printf("Enter a & b : ");
    scanf("%d %d",&a ,&b);

    for(int num = a; num < b ; num++) {
        for ( i = 2; i < num ; i++) {
            if (num % i == 0){
                break;
            }  
        }  
        if (i == num) {
            printf("%d ",num);
            sum += num;
        }
    }
    printf("\n");
    printf("The Sum Of %d To %d All Prime Number Is : %d",a,b,sum);
    return 0;
}