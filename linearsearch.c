#include<stdio.h>
int main()
    {
      int array[50], element, i, n;
     
      printf("Enter the number of elements in array\n");
      scanf("%d", &n);
     
      printf("Enter %d integer(s)\n", n);
     
      for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
     
      printf("Enter a number to search\n");
      scanf("%d", &element);
     
      for (i = 0; i < n; i++)
      {
        if (array[i] == element)
        {
          printf("%d is present at location %d.\n", element, i+1);
          break;
        }
      }
      if (i == n)
        printf("%d is not found in the array!\n", element);
      }	
