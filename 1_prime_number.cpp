#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("Enter n value:");
scanf("%d",&n);
int arr[n+1];
for(int i = 1; i <= n; i++)
{
arr[i] = i;
}
for(int i = 2; i<=sqrt(n); i++)
{
if(arr[i] != -1)
{
for(int j=2*i; j<=n ; j=j+i)
arr[j]=-1;
}
}
printf("Prime numbers are:");
for(int i=2; i<= n; i++)
{
if(arr[i]!=-1)
{
printf("%d ",i);
}
}
printf("\n");
return 0;
}
