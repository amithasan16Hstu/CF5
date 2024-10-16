#include<stdio.h>
#define nV 4
#define INF 999
void printMatrix(int matrix[][nV]);
void path(int graph[][nV])
{
 int matrix[nV][nV],i,j,k;
 for(i=0;i<nV;i++)
 {
   for(j=0;i<nV;j++)
   {
      matrix[i][j]=graph[i][j];
   }
 }
 for(k=0;k<nV;k++)
 {
   for(i=0;i<nV;i++)
   {
      for(j=0;j<nV;j++)
      {
         if(matrix[i][j]>matrix[k][j]+matrix[i][k])
         {
            matrix[i][j]=matrix[k][j]+matrix[i][k];
         }
      }
   }
 }
 printMatrix(matrix);
}
void printMatrix(int matrix[][nV])
{
   for(int i=0;i<nV;i++)
   {
      for(int j=0;j<nV;j++)
      {
         if(matrix[i][j]==INF)
         {
            printf("%4s",INF);
         }
         else{
            printf("%4d",matrix[i][j]);
         }
      }
   }
}
int main()
{
   int graph[nV][nV]={{0,2,}}
}