#include <stdio.h>

int main (void)
{
	int numbers[100];
	int i, j;

	printf("enter your numbers here:");
	scanf("%d\n", &numbers[i]);
	for (i = 0; i < 100; i++)
	{
		int num;

		scanf("%d", &num);
		printf("[%d]", num);
		for (j = 0; j < 100; j++)
		{
			int num1;

			scanf("%d", &num1);
			printf("[%d]", num1);
		}
	}
	
	return (0);
}
