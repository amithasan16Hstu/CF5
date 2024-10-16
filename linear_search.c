#include <stdio.h>
int main()
{
          int arr[50], i, target, n;
          printf("How many elements do you want in the array :");
          scanf("%d", &n);
          printf("Enter array elements :");
          for (i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
          printf("Enter element to search :");
          scanf("%d", &target);
          for (i = 0; i < n; ++i)
          {
                    if (arr[i] == target)
                              break;
          }
          if (i < n)
                    printf("Target element found at location %d \n", i);
          else
                    printf("Target element not found in an array.\n");
          return 0;
}