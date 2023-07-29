// Q21. Write a program to print name of the candidate only if the candidate has (age >18).
#include<stdio.h>

int main() {
    int age;
    char name[20];
    printf("Enter Your Name & Age : ");
    scanf("%s %d",&name,&age);
    if(age > 18) {
        printf("Your Name Is : %s\n",name);
    }
    else if(age <= 18) {
        printf("You Are Under 18! \n");
        printf("After %d Year You Will Be 18 !\n",(18-age));
    }
    return 0;
}