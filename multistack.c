#include<stdio.h>
int top[5],stack[10],size=10,boundary[5];
void push(int i,int data)
{
	if(top[i]==boundary[i+1])
		printf("Overflow\n");
	else
	{
		stack[++top[i]]=data;
	printf("ghhg\n");
	}
};
int pop(int i)
{
	int d;
	if (top[i]==boundary[i])
		printf("Underflow\n");
	else
	{
		d=stack[top[i]];
		top[i]--;
		printf("work\n");
	}
	return d;
};
void main()
{
	int n=3,i,m,data,choice;
	top[0]=boundary[0]=-1;
	for(i=1;i<=n;i++)
		top[i]=boundary[i]=((size-1)/n)*i;
	while(1)
	{
		printf("Choose from the following: \n 1. Push \n 2. Pop \nEnter your choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Enter i and data to push: ");
				scanf("%d%d",&m,&data);
				push(m,data);
				break;
			case 2:
				printf("Enter i to pop: ");
				scanf("%d",&m);
				pop(m);
				break;
		}
	}
}
