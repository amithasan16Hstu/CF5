#include <stdio.h>
void towers(int num, char frompeg, char topeg, char auxpeg)
{
   if (num == 1)
   {
      printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
      return;// Base case: When there is only one disk to move, print the move.
   }
   // Recursive case:
    // 1. Move (num - 1) disks from 'frompeg' to 'auxpeg' using 'topeg' as auxiliary peg.
   towers(num - 1, frompeg, auxpeg, topeg);
    // 2. Move the remaining disk (the largest one) from 'frompeg' to 'topeg'.
   printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
    // 3. Move the (num - 1) disks from 'auxpeg' to 'topeg' using 'frompeg' as auxiliary peg.
   towers(num - 1, auxpeg, topeg, frompeg);
}
int main()
{
   int num;
   printf("Enter the number of disks :");
   scanf("%d", &num);
   printf("The sequence of moves involved in the Tower of Hanoi are :\n");
   towers(num, 'A', 'C', 'B');
   printf("\n");
   return 0;
}
