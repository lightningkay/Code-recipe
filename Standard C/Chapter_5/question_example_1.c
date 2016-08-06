/*
 *This program tests a function to compute the mathematical
 *combination function Combination(n,k), which gives the number of ways 
 *to  choose a subset of k objects from a set of n distinct objects.
 */


#include <stdio.h>

int Factorial(int n);
int main()
{
	printf("Computing Combination(n,k).\n");
	int n,k,result;
	printf("n?");
	scanf("%d", &n);
	printf("k?");
	scanf("%d", &k);
	result = (Factorial(n)/Factorial(k))/Factorial(n-k);
	printf("%d\n", result);

	return 0;	
}


int Factorial(int n)
{
	int m = 1;
	for (int i = n; i != 0; i-- )
	{
		m = m * i;
	}
	printf("%d\n", m);	
	return m;
}
