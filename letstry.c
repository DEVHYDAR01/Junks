#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct studentlist {
  char name[50];
  int age;
  char course[50];
  studentlist *next;
}studentlist;

studentlist *head, *newnode, *temp;
int choice = 0;
int n;

void insert(char *name, int age, char *course)
{
	while (choice < n)
	{
		studentlist *newnode = (studentlist *)malloc(sizeof(studentlist));
  		strcpy(newnode->name, name);
  		strcpy(newnode->course, course);
  		newnode->age = age;
  		newnode->next = newnode;

  		if (head == NULL)
		{
    			head = temp = newnode;
  		} 
		else 
		{
    			temp->next = newnode;
			temp = newnode;
  		}
		choice++;
	}
}

void print() {
  temp = head;
  while (temp != NULL) {
    printf("%s %s %d\n", temp->name, temp->age, temp->course);
    temp = temp->next;
  }
}

int main() {
  char name[50];
  int age;
  char course[50];

  printf("how many do you want");
  scanf("%d", &n);

  printf("enter your name : ");
  scanf("%s", name);

  printf("enter your age: ");
  scanf("%d", &age);

  printf("enter your course");
  scanf("%s", course);

  insert(name, age, course);

  print();

  return 0;
}
