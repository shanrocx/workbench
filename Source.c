#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void creation();
void insertion();
void removal();
void display();

struct node
{
	int data;
	struct node *next;
};

typedef struct node node1;

node1 *head = NULL;

void main()
{
	int  n,choice;
	printf("Enter the size of the list:");
	scanf("%d", &n);
	printf("List Operations\n");
	printf(" 1.Insertion\n 2.Removal\n 3.Display\n 4.Exit\n");
	do
	{
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: creation();
			    break;

		case 2: insertion();
			    break;

		case 3: removal();
			    break;

		case 4: display();
			    break;

		case 5: exit(0);
			    break;

		default: printf("Enter a Valid Choice");
		}
	} while (choice != 5);
}

void creation()
{

}

	node1 *first, *second, *third;
	first = (node1*)malloc(sizeof(node1));
	second = (node1*)malloc(sizeof(node1));
	third = (node1*)malloc(sizeof(node1));

	
	head = first;
	while (head != NULL)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}

