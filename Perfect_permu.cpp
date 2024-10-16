#include <bits/stdc++.h>
using namespace std;
int main()
{
   int tst;
   cin >> tst;
   for (int j = 0; j < tst; j++)
   {
      int n;
      cin >> n;
      if (n == 2)
         cout << "2 1" << endl;

      else if (n == 1)
         cout << "1" << endl;

      else
      {
         for (int i = 2; i <= n; i++)
         {
            cout << i << " ";
         }
         cout << "1"<<endl;
      }
   }
}