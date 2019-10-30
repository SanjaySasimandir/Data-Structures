
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
	int choice,i=0;
	char string[50];
	
	printf("Enter the string to push: ");
	scanf("%s",&string);
	while(string[i]!=NULL)
	{
		if(isdigit[string[i]])
			push(string[i]-'0');
		else
		{
		x=pop();
		y=pop();
		if(string[i]=="+")
			result=x+y;
		else if(string[i]=="-")
			result=x-y;
		else if(string[i]=="*")
			result=x*y;
		else if(string[i]=="/")
			result=x/y;
		else if(string[i]=="^")
			result=pow(x,y);
		else
			printf("Invalid Expression!");
		}
