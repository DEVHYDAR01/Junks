#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{	
		printf("#");
		for(j = 0; j < 4; j++)
		{
		
			printf("#");
		}
		printf("\n");
	}


	return (0);
}
