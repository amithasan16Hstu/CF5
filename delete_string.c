#include<stdio.h>
#include<string.h>
int main()
{
char str[100],ch;
printf("Enter the string :");
gets(str);
int len=strlen(str);
printf("Enter the character for delete :");
scanf("%c",&ch);
printf("\nAfter removing '%c' ,we get the string :",ch);
for(int i=0; i<len; i++)
{
if(str[i]!=ch)
printf("%c",str[i]);
}
printf("\n");
return 0;
}
