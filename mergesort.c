#include<stdio.h>
void mergesort(int arr[], int low, int mid,int high);
void partition(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		partition(arr,low,mid);
		partition(arr,mid+1,high);
		mergesort(arr,low,mid,high);
	}
}
void mergesort(int arr[], int low, int mid,int high)
{
	int l,i,m,k,temp[50];
	l=low;
	i=low;
	m=mid+1;
	while(l<=mid && m<=high)
	{
		if(arr[l]<=arr[m])
		{
			temp[i]=arr[l];
			l++;
		}
		else
		{
			temp[i]=arr[m];
			m++;
		}
		i++;
	}
	if(l>mid)
	{
		for(k=m;k<=high;k++)
		{
			temp[i]=arr[k];
			i++;
		}
	}
	else
	{
		for(k=l;k<=mid;k++)
		{
			temp[i]=arr[k];
			i++;
		}
	}
	for(k=low;k<=high;k++)
		arr[k]=temp[k];
}
void traversal(int arr[],int n)
{
	int i;
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
void main()
{
	int arr[50],n,i,low=0,high;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	high=n;
	partition(arr,low,high);
	traversal(arr,n);
}
