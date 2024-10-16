#include <stdio.h>
#include <string.h>
int main()
{
   char str[100], old, New;
   printf("Enter the string :");
   gets(str);
   int len = strlen(str);
   printf("Enter the character for replace :");
   scanf("%c %c", &old, &New);
   printf("\nReplace array :");
   for (int i = 0; i < len; i++)
   {
      if (str[i] == old)
         printf("%c", New);
      else
         printf("%c", str[i]);
   }
   return 0;
}
