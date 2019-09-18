#include <stdio.h>
void main()
{
	int array[100],n,i,d,position,swap;
	printf("Enter number of elements\n");
	scanf("%d", &n);
	printf("Enter %d integers:\n", n);
	for(i=0;i<n;i++)
		scanf("%d", &array[i]);
     
	for(i=0; i<(n-1);i++)
	{
		position=i;
	 	for(d=i+1;d<n;d++)
		{
			if(array[position] > array[d])
				position= d;
		}
		if(position!=i)
		{
			swap= array[i];
			array[i]= array[position];
			array[position]= swap;
		}
	}
	printf("Sorted list in ascending order:\n");
	for (i = 0; i < n; i++)
		printf("%d\n", array[i]);
    }	
