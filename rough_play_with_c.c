#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}struct node;
struct node *newnode;
/**
 * A program to test out printf.
 *
 */
int main(void)
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("%d\n", struct node->data);
	return(0);
}
