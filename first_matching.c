#include <stdio.h>
#include <string.h>
int main()
{
          int i, j, len1, len2, count = 0;
          char arr1[]="AAABAABABAAABA";
          char arr2[]="AAABA";
          len1 = strlen(arr1);
          len2 = strlen(arr2);
          for (i = 0; i < len1 - len2+1; i++)//length=text_length-string_length+1
          {
                    for (j = 0; j < len2; j++)
                    {
                              if (arr1[i+j] != arr2[j])
                                        break;
                    }
                    if (j == len2)
                    {
                              count++;
                              printf("Pattern found at index %d \n", i + 1);
                    }
          }
          if (count == 0)
                    printf("Pattern is not found\n");
          return 0;
}