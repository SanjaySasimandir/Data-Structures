#include<stdio.h>
struct node*insertbeg(struct node*n, struct node*head);
void main()
{
	int choice;
	while(1)
	{
		printf("Choose from the following options: \n 1. Insertion at the Beginning \n 2. Insertion at the Middle \n 3. Insertion at the End \n 4. Deletion from the Beginning \n 5. Deletion from the Middle \n 6. Deletion at the End \n 7. Traversal\n" );
		printf("Enter : ");
		scanf("%d",&choice);
		switch (choice)
			{
			case 1:
				printf("You have chosen - 1. Insertion at the Beginning\n");
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
				break;
			}
		printf("\n\n");
	}
}