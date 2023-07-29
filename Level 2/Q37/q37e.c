// Hollow Half Pyramid Pattern        
        
        /*
        1 
        1 2
        1   3 
        1     4 
        1       5 
        1 2 3 4 5 6  
*/

// C program print hollow half pyramid
// pattern using numbers
#include <stdio.h>

// Pattern function
void pattern(int N)
{
	int i, j;

	// loop to print number from 1 to N
	for (i = 1; i <= N; i++) {
		// For loop to display number upto i
		for (j = 1; j <= i; j++) {
			if (j == 1 || j == i || i == N)
				printf("%d ", j);
			else
				printf(" ");
		}
		printf("\n");
	}
}

// Driver Code
int main()
{
	int N = 5;
	// Function Call
	pattern(N);
	return 0;
}
