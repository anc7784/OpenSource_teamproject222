#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=0;
	int sum=0;
	
	printf("Hello World!\n");
	printf("Summation from 0 to 10\n")
	for (i=0; i<10; i++)
	{
		sum += i;
	}
	return sum;
	printf("The result value is %d\n", sum);
	return 0;
}

