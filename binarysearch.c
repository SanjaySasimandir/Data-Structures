#include <stdio.h>
     
void main()
{
	int c, first, last, middle, n, element, array[50];
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter %d integers: ", n);
	for (c = 0; c < n; c++)
	scanf("%d",&array[c]);
     
	printf("Enter value to find: ");
	scanf("%d", &element);
     
	first = 0;
	last = n - 1;
	while (first <= last) 
		{
			middle = (first + last)/2;
			if (array[middle] < element)
			first = middle + 1;    
			else if (array[middle] == element) 
			{
	 			printf("%d found at location %d.\n", element, middle+1);
				break;
		  	}
			else
				last = middle - 1;
				middle = (first + last)/2;
			
		}
	if (first > last)
		printf("%d was not found in the list.\n", element);
}
