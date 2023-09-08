#include <stdio.h>

int main(void)
{

	int f;
	int d;
	for (f = 0; f <= 9; f++)
	{
		for(d = 'a'; d <= 'z'; d++)
		{
		
			char alpha = d;
			printf("%c", alpha);
		}
		printf("\n");
	}
}
