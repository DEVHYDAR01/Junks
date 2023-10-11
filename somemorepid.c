#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct student
{
	char name;
	int age;
	float gpa;
	struct student *next;

}stu;
stu newnode, head, temp;

int main (int argc, char *argv[])
{
	newnode = (stu *) malloc(sizeof(stu));
	printf("enter your name\n");
	scanf("%s", &stu->name);
	printf("enter your age\n");
	scanf("%d", &stu->age");

	return(0);
}
