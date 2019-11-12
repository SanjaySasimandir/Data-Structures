#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*lc,*rc;
};
struct node*createnode(int item)
	{
	struct node *p;
	p=(struct node*) malloc(sizeof(struct node));
	p->data= item;
	p->lc=NULL;
	p->rc=NULL;
	return p;
};
struct node *insert(struct node *root,struct node *item)
{
	struct node *ptr, *p;
	if(root==NULL)
		root=item; //n=item
	else
	{
		ptr=root;
		while(ptr!=NULL)
		{
			if(ptr->data>=item->data)
			{
				p=ptr;
				ptr=ptr->lc;
			}
			else
			{
				p=ptr;
				ptr=ptr->rc;
			}
		}
		if(p->data>=item->data)
			p->lc=item;
		else
			p->rc=item;
		return root;
	}
};
void inorder(struct node *p)
{
	if(p!=NULL)
	{
		inorder(p->lc);
		printf("%d\n",p->data);
		inorder(p->rc);
	}
};	
void main()
{	int choice,number;
	struct node *n, *root=NULL;
	while(1)
	{
		printf("Choose from the following options: \n 1. Insert Node \n 2. Traversal\nEnter Choice:" );
		scanf("%d",&choice);
		switch (choice)
				{
				case 1:
					printf("Enter your data: ");
					scanf("%d",&number);
					n=createnode(number);
					root=insert(root,n);
					break;
				case 2:
					inorder(root);
					break;
				}
			printf("\n\n\n");
		}
}
