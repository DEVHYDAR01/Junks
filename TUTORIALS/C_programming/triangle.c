#include <stdio.h>

int main(void)
{

	int k, j;

	for (k = 0; k <= 10; k++)
	{
		printf("#");
		for (j = 0; j <= k; j++)
		{
		
			printf("#");
		}
		printf("\n");
	}
	return (0);
}
