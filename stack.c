#include<stdio.h>
int top=-1,stack[50],size=50;
void push(int data)
{
	if(top==size-1)
	{
		printf("Overflow!\n");
	}
	else
	{	
		top=top+1;
		stack[top]=data;
	}

};
int pop()
{
	if(top==-1)
	{
		printf("Underflow!");
	}
	else
	{
		return(stack[top--]);
	}
};
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
};
void main()
{
	int choice,item;
	while(1)
	{
		printf("Choose from the following: \n 1. Push \n 2. Pop \n 3. Display \nEnter your choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Enter the data to push: ");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break
	}
		}
}

