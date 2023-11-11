#include <stdio.h>
#include <stdlib.h>
/**
 * This code will malloc memory
 */
int main(void)
{
	int n, *ptr, i;

	printf("Enter the number of memory\n");
	scanf("%d", &n);
	ptr = (int*)malloc(sizeof(int) * n);
	if (ptr == NULL)
	{
		printf("Memory was not allocated");
		exit(1);
	}
	printf("please enter your memory\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));

	}
	printf("This are your numbers\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n", *(ptr + i));
	}


	return(0);
}
