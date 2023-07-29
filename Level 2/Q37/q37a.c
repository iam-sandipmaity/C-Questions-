// Print A Solid Rectangle 

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<stdio.h>

int main() {
    int row ,col;
    printf("Enter row & col : ");
    scanf("%d %d",&row,&col);

    for(int i = 1; i <= row ; i++){
        for (int j = 0; j <= col; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}