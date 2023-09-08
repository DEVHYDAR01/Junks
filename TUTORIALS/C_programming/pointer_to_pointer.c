#include <stdio.h>

int main(void)
{
	int num;
	int *ptr1;
	int **ptr2;

	num = 700;
	ptr1 = &num;
	ptr2 = &ptr1;

	printf("what is the sizeof p:%ld\n", sizeof(ptr2));
	return (0);
}
