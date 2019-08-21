#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*addr;
};
struct node*createnode(int item)
	{
	struct node*p;
	p=(struct node*) malloc(sizeof(struct node));
	p->data= item;
	p->addr=NULL;
	return p;
};
struct node*insertbeg(struct node*n, struct node*head)
	{
	if (head==NULL)
		head=n;
	else
		{
		n->addr=head;
		head=n;
		}
	return head;
	};
void traversal(struct node*head)
	{
	struct node*p;
	if (head==NULL)
		printf("Empty");
	else
		{
		p=head;
		while(p!=NULL)
			{
			printf("%d",p->data);
			p=p->addr;
			}
		}
	};
void main()
{
	int choice,number;
	struct node *n;
	struct node *head=NULL;
	while(1)
	{
		printf("Choose from the following options: \n 1. Insertion at the Beginning \n 2. Insertion at the Middle \n 3. Insertion at the End \n 4. Deletion from the Beginning \n 5. Deletion from the Middle \n 6. Deletion at the End \n 7. Traversal\n" );
		printf("Enter : ");
		scanf("%d",&choice);
		switch (choice)
			{
			case 1:
				printf("Enter your data: ");
				scanf("%d",&number);
				n=createnode(number);
				head=insertbeg(n,head);
				break;
			case 2:
				printf("You have chosen - 2. Insertion at the Middle\n");
				break;
			case 3:
				printf("You have chosen - 3. Insertion at the End\n");
				break;
			case 4:
				printf("You have chosen - 4. Deletion from the Beginning\n");
				break;
			case 5:
				printf("You have chosen - 5. Deletion from the Middle\n");
				break;
			case 6:
				printf("You have chosen - 6. Deletion at the End\n");
				break;
			case 7:
				printf("You have chosen - 7.Traversal\n");
				traversal(head);
				break;
			}
		printf("\n\n\n");
	}
}

