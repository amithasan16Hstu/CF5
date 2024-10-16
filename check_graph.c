#include <stdio.h>
#include <stdlib.h>
struct Node
{
   int vertex;
   struct Node *next;
};
struct Graph
{
   int vertexNum;
   struct Graph **adjList;
};
struct Node *CreateNode(int data)
{
   struct Node *newnode;
   newnode = (struct Node *)malloc(sizeof(struct Node));
   newnode->vertex = data;
   newnode->next = NULL;
   return newnode;
}
struct Graph *CreateGraph(int data)
{
   struct Graph *newnode;
   newnode = (struct Graph *)malloc(sizeof(struct Graph));
   newnode->vertexNum = data;
   for (int i = 0; i < data; i++)
   {
      newnode->adjList[i] = NULL;
   }
   return newnode;
}
void addEdge(struct Graph *graph, int s, int d)
{
   struct Node *newnode = CreateNode(d);
   newnode->next = graph->adjList[s];
   graph->adjList[s] = newnode;

   struct Node *newnode = CreateNode(s);
   newnode->next = graph->adjList[d];
   graph->adjList[d] = newnode;
}
void printV(struct Graph *graph)
{
   for(int i=0;i<graph->vertexNum;i++)
   {
      struct Node *temp=graph->adjList[i];
      printf("%d ",i);
      while(temp)
      {
         printf("%d",temp->vertex);
         temp=temp->next;
      }
      
      printf("\n");
      
   }
}