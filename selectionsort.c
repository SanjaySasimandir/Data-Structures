#include <stdio.h>
void main()
{
    int a[5]={1,2,3,4,5},n=5,i,j,temp;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
     
    for(i=0; i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(a[i]<a[j])
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      }
    }
    printf("Sorted array is: \n");
    for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
}
