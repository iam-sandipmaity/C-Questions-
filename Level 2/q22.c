// Q22. Write a program to find smallest of a given number list with 4 numbers.
#include<stdio.h>

int main() {
    int num1, num2, num3, num4;
    printf("Enter num1 , num2 , num3 & num4 : ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

    if(num1 < num2 && num1 < num3 && num1 < num4){
        printf("The Smallest Number Is : %d \n",num1);
    }
    else if (num2 < num3 && num2 < num4){
        printf("The Smallest Number Is : %d \n",num2);
    }
    else if(num3 < num4) {
        printf("The Smallest Number Is : %d \n",num3);
    }
    else {
        printf("The Smallest Number Is : %d \n",num4);
    }
    return 0;
}