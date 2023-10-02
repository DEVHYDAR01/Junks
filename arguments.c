#include <stdio.h>

int main(int argc, char *argv[])
{
	printf ("%d\n", argc);

	int i;

	for (i = 0; argv[i]; i++)
	{
	
		printf("%d = %s\n", i, argv[i]);
	}
	return (0);
}
