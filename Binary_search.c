#include <stdio.h>
int main()
{
   int i, n, arr[100], search, first, last, mid;
   printf("Enter number of elements :");
   scanf("%d", &n);
   printf("Enter %d integers :", n);
   for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
   printf("Enter element to be search:");
   scanf("%d", &search);
   first = 0;
   last = n;
   mid = (first + last) / 2;
   while (first <= last)
   {
      mid = (first + last) / 2;
      if (arr[mid] < search)
         first = mid + 1;
      else if (arr[mid] == search)
      {
         printf("\nThe number %d is found at Position %d", search, mid + 1);
         break;
      }
      else
         last = mid - 1;
   }
   if (first > last)
      printf("\nThe number, %d is not found in given Array", search);
   return 0;
}