#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      long long int num;
      cin >> num;
      int array[num];
      for (int j = 0; j < num; j++)
      {

         cin >> array[j];
      }
      sort(array, array + num);
      long long int count1 = 0, count2 = 0, maximum, minimum;
      long long int result;
       minimum = array[0], maximum = array[num - 1];
      if (maximum -  minimum == 0)
         result = (num - 1) * num;
      else
      {
         for (int k = 0; k < num; k++)
         {
            if (array[k] ==  minimum)
               count1++;
            else if (array[k] == maximum)
               count2++;
         }

          result= (count1 * count2) * 2;
      }
      cout <<  result << endl;
   }

   return 0;
}