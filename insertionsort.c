#include<stdio.h>
void insertsort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
};
void traversal(int arr[],int n)
{
	int i;
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
};
void main()
{
	int arr[50],n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	insertsort(arr,n);
	traversal(arr,n);
}
