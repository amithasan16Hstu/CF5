#include <stdio.h>
#include <string.h>
int main()
{
char arr1[100],arr2[100],arr3[100];
printf("Enter First String:");
gets(arr1);
printf("Enter Second String:");
gets(arr2);
int pos;
printf("Enter the position where the item has to be inserted:");
scanf("%d",&pos);
int len1 = strlen(arr1);
int len2 = strlen(arr2);
int len3=len1+len2+1;
int k=0;
for(int i=0; i<len3; i++)
{
if(i<pos)
arr3[i]=arr1[i];
else if(i>=pos && i<pos+len2)
{
arr3[i]=arr2[k];
k++;
}
else
{
arr3[i]=arr1[k];
k++;
}
}
for(int i=0; i<len3-1; i++)
{
printf("%c",arr3[i]);
}
return 0;
}