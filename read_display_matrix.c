#include <stdio.h>
int main()
{
int r,c;
printf("Enter numbers of row :");
scanf("%d",&r);
printf("Enter numbers of column :");
scanf("%d",&c);
int arr[r][c],i,j;
for(i=0; i<r; i++)
{
for(j=0; j<c; j++)
scanf("%d",&arr[i][j]);
}
printf("\nThe matrix is :");
for(i=0; i<r; i++)
{
printf("\n");
for(j=0; j<c; j++)
printf("%d ",arr[i][j]);
}
return 0;
}
