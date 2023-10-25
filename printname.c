#include <stdio.h>
/**
 * This program will get name and print it
 */
int main(void)
{
	char name[100];

	printf("please enter your name\n");
	scanf("%s\n", &name);
	printf("This is the name you entered\n");
	printf("%s\n", name);

	return(0);
}
