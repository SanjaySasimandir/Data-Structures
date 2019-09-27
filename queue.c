#include<stdio.h>
int queue[50],front=-1,rear=-1,size=50;
void enqueue(int data)
{
	if(rear==size-1)
	{
		printf("Overflow!");
	}
	else
	{
		if(rear==-1)
		{
			front=0;
		}
		queue[++rear]=data;
		
	}
};
int dequeue()
{
	int d;
	if(front==-1)
		printf("Underflow!");
	else
	{
		d=queue[front];
		if(front==rear)
			front=rear=-1;
		else
			front++;
	}
	return d;
};
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
};
void main()
{
	int choice,item;
	while(1)
	{
		printf("Choose from the following: \n 1. Queue \n 2. Dequeue \n 3. Display \nEnter your choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Enter the data to Queue: ");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
	}
		}
}

