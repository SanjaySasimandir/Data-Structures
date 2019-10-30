#include<stdio.h>
#include<math.h>
#include<ctype.h>
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
void main()
{
	int choice,i=0,x,y,result;
	char string[50];
	
	printf("Enter the string: ");
	scanf("%s",string);
	while(string[i]!='\0')
	{
		if(isdigit(string[i]))
			push(string[i]-'0');
		else
		{
		x=pop();
		y=pop();
		if(string[i]=='+')
			result=x+y;
		else if(string[i]=='-')
			result=x-y;
		else if(string[i]=='*')
			result=x*y;
		else if(string[i]=='/')
			result=x/y;
		else if(string[i]=='^')
			result=pow(x,y);
		else
			printf("Invalid Expression!");
		push(result);
		}
		
		i++;
	}
	result=pop();
printf(" Ans: %d",result);
}
