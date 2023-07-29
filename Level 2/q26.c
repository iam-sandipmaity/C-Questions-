// Q26. Find whether a number is Armstrong or not.

#include<stdio.h>

int main() {
    int num;
    printf("Enter Num : ");
    scanf("%d",&num);
    int Temp_Num = num;
    int i = 1 , sum = 0;
    while (num > 0) {
        int r = num % 10;
        sum += r*r*r;
        num /= 10;
    }
    if(sum == Temp_Num) {
        printf("%d Is An Amstrong Number \n",Temp_Num);
    }
    else {
        printf("%d Is Not An Amstrong Number \n",Temp_Num);
    }
    
    return 0;
}
