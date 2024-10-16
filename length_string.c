#include <stdio.h>
int main()
{
int len=0;
char s[1000];
printf("Enter the string :");
gets(s);
for (int i = 0; s[i] != '\0'; i++)
len++;
printf("\nLength of the string : %d\n", len);
return 0;
}
