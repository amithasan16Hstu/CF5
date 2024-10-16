#include <stdio.h>
int main()
{
int arr[100],i,j,n,swap,pos;
printf("Enter number of elements :");
scanf("%d", &n);
printf("Enter %d integers :", n);
for (i=0; i<n; i++)
scanf("%d",&arr[i]);
for (i=0; i<n-1; i++)
{
pos = i;
for (j=i+1; j<n; j++)
{
if (arr[pos]>arr[j])
pos = j;
}
if (pos != i)
{
swap=arr[i];
arr[i]=arr[pos];
arr[pos]=swap;
}
}
printf("Sorted list in ascending order :");
for (i=0; i<n; i++)
printf("%d ",arr[i]);
printf("\n");
printf("Sorted list in decending order :");
for (i=n-1; i>=0; i--)
printf("%d ",arr[i]);
printf("\n");
return 0;
}
