#include<stdio.h>
int main()
{
int arr[50],i,n,large,small;
printf("How many elements:");
scanf("%d",&n);
printf("Enter the Array:");
for(i=0; i<n; i++)
scanf("%d",&arr[i]);
large=arr[0];
small=arr[0];
for(i=1; i<n; i++)
{
if(arr[i]>large)
large=arr[i];
if(arr[i]<small)
small=arr[i];
}
printf("The largest element is %d\n",large);
printf("The smallest element is %d\n",small);
return 0;
}
