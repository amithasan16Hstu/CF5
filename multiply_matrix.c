#include<stdio.h>
int main()
{
int mat1[10][10], mat2[10][10], mul[10][10], n, i, j, k, sum[10][10];
printf("Enter the value of N :");
scanf("%d", &n);
printf("Enter the elements of Matrix-A: \n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
scanf("%d", &mat1[i][j]);
}
}
printf("Enter the elements of Matrix-B: \n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
scanf("%d", &mat2[i][j]);
}
}
printf("\nThe sum of the two matrices is:");
for(i=0; i<n; i++)
{
printf("\n");
for(j=0; j<n; j++)
{
sum[i][j] =mat1[i][j]+mat2[i][j];
printf("%d ",sum[i][j]);
}
}
printf("\n");
printf("\nThe product of the two matrices is: \n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
mul[i][j] = 0;
for (k = 0; k < n; k++)
{
mul[i][j] = mul[i][j] + mat1[i][k] * mat2[k][j];
}
printf("%d ", mul[i][j]);
}
printf("\n");
}
return 0;
}
