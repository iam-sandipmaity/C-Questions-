//Q 27. Program to find the sum of a Series 1/1! + 2/2! + 3/3! + 4/4! +…….+ n/n!

// CPP program to print
// the sum of series
#include<stdio.h>


// function to calculate
// sum of given series
double sumOfSeries(double num)
{
	double res = 0, fact = 1;
	for (int i = 1; i <= num; i++)
	{
		// fact variable store
		// factorial of the i
		fact = fact * i;

		res = res + (i / fact);
	}
	return(res);
}

// Driver Code
int main()
{
	double n ;
    printf("Enter n : ");
    scanf("%lf",&n);
	printf  ("Sum: %.2lf"  ,sumOfSeries(n));
	return 0;
}
