#include<stdio.h>
void quicksort(int a[],int first,int last);
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void quicksort(int a[],int first,int last)
{
	int i,j,pivot,t;
	if(first<last)
	{
		pivot=a[first];
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<=pivot&&i<last)
				i++;
			while(a[j]>=pivot&&j>first)
				j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[j];
		a[j]=a[first];
		a[first]=t;
		quicksort(a,0,j-1);
		quicksort(a,j+1,last);
	}
};
void traversal(int arr[],int n)
{
	int i;
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
void main()
{
	int arr[50],n,i,first=0,last;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	last=n-1;
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	//printf("
	quicksort(arr,first,last);
	traversal(arr,n);
}
