#include<stdio.h>
int queue[10],front[5],rear[5],size=10,boundary[5],n=3;
void enqueue(int i,int data)
{
	if(rear[i]==boundary[i+1])
		printf("Overflow");
	else
	{
		if(rear[i]==boundary[i])
			front[i]++;
		queue[++rear[i]]=data;
	}
};
int dequeue(int i)
{
	int d;
	if (front[i]==boundary[i])
		printf("Underflow");
	else
	{
		d=queue[front[i]];
		if(front[i]==rear[i])
			front[i]=rear[i]=boundary[i];
		else
			front[i]++;
		return d;
	}
};
void main()
{
	int choice,data,m,i;
	boundary[0]=front[0]=rear[0]=-1;
	for(i=1;i<=n;i++)
		boundary[i]=front[i]=rear[i]=(size-1)/n;
	while(1)
	{
		printf("Choose from the following: \n 1. Queue \n 2. Dequeue \nEnter your choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Enter i and data to Queue: ");
				scanf("%d%d",&m,&data);
				enqueue(m,data);
				break;
			case 2:
				printf("Enter i to dequeue: ");
				scanf("%d",&m);
				dequeue(m);
				break;
		}
	}
}

