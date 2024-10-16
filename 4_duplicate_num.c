#include<stdio.h>
int main()
{
int arr[50],i,n,sum=0;
printf("How many elements:");
scanf("%d",&n);
printf("Enter the Array:");
for(i=0; i<n; i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("The sum of array is %d.\n",sum);
return 0;
}