#include <stdio.h>
int main()
{
   int arr[100], i, j, n, swap;
   printf("Enter number of elements :");
   scanf("%d", &n);
   printf("Enter %d integers :", n);
   for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
   for (i = 0; i < n - 1; i++)
   {
      for (j = 0; j < n - i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            swap = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = swap;
         }
      }
   }
   printf("Sorted list in ascending order :");
   for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
   printf("\n");
   printf("Sorted list in decending order :");
   for (i = n - 1; i >= 0; i--)
      printf("%d ", arr[i]);
   printf("\n");
   return 0;
}