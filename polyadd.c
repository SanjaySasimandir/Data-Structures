#include<stdio.h>
#include<stdlib.h>
struct term
{
	int coef,exp;
	struct term *addr;
};
struct term *createterm(int coef, int exp)
{
	struct term *p;
	p=malloc(sizeof(struct term));
	p->coef=coef;
	p->exp=exp;
	p->addr=NULL;
	return p;
};
struct term *createpoly(int n)
{
	int i,c,e;
	struct term *head=NULL, *nt,*last;
	for(i=0; i<n; i++)
	{
		printf("Enter Coefficients and Exponents of term %d: ",i+1);
		scanf("%d%d",&c,&e);
		nt=createterm(c,e);
		if(head==NULL)
			head=last=nt;
		else
		{
			last->addr=nt;
			last=nt;
		}
	}
	return head;
};
struct term *addpoly(struct term *h1, struct term *h2)
{
	struct term *rh=NULL,*p1,*p2,*n,*last;
	p1=h1;
	p2=h2;
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->exp> p2->exp)
		{
			n=createterm(p1->coef,p1->exp);
			p1=p1->addr;
		}
		else if(p1->exp<p2->exp)
		{
			n=createterm(p2->coef,p2->exp);
			p2=p2->addr;
		}
		else
		{
			n=createterm(p1->coef+p2->coef,p1->exp);
			p1=p1->addr;
			p2=p2->addr;
		}
	if(rh==NULL)
		rh=last=n;
	else
	{
		last->addr=n;
		last=n;
	}
	}
	while(p1!=NULL)
	{
		n=createterm(p1->coef,p1->exp);
		p1=p1->addr;
		if(rh=NULL)
			rh=last=n;
		else
		{
			last->addr=n;
			last=n;
		}
	}
	while(p2!=NULL)
	{
		n=createterm(p2->coef,p2->exp);
		p2=p2->addr;
		if(rh==NULL)
			rh=last=n;
		else
		{
			last->addr=n;
			last=n;
		}
	}
	return rh;
};
void traverse(struct term *head)
{
	struct term*p;
	p=head;
	while(p!=NULL)
	{
		printf("%dx%d + ",p->coef,p->exp);
		p=p->addr;
	}
};
void main()
{
	int n1,n2;
	struct term *p1,*p2,*p3;
	printf("Enter the number of terms in Polynomial 1: ");
	scanf("%d",&n1);
	printf("Enter terms of Polynomial 1: \n");
	p1=createpoly(n1);
	printf("\n\nEnter the number of terms in Polynomial 2: ");
	scanf("%d",&n2);
	printf("Enter terms of Polynomial 2: \n");
	p2=createpoly(n2);
	p3=addpoly(p1,p2);
	printf("\nThe sum of polynomials is : \n");
	traverse(p3);
	printf("\n")
}
