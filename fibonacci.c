
#include <stdio.h>
long long int Fibo(int c)
{
   if (c == 0)
   {
      return 0;
   }
   else if (c == 1)
   {
      return 1;
   }
   else
      return (Fibo(c - 1) + Fibo(c - 2));
}
int main()
{
   long long int n, count = 0;
   printf("Enter A Number: ");
   scanf("%lld", &n);
   for (int i = 1; i <= n; i++)
   {
      printf("%lld ", Fibo(count));
      count++;
   }
   printf("\n");
}