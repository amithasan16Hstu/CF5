#include <stdio.h>
#include <string.h>
int main()
{
int i,count=0;
char str1[100],str2[100];
printf("Enter 1st string :");
gets(str1);
printf("Enter 1st string :");
gets(str2);
int len1=strlen(str1);
int len2=strlen(str2);
if(len1!=len2)
printf("both are not same\n");
else
{
for(i=0; i<len1; i++)
{
if(str1[i]==str2[i])
count++;
}
if(count==len1)
printf("both are same\n");
else
printf("both are not same\n");
}
return 0;
}
