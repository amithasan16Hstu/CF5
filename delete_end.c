#include <stdio.h>
#include <stdlib.h>
struct Node
{
   int data;
   struct Node *next;
};
void Traversal(struct Node *ptr)
{
   while (ptr != NULL)
   {
      printf("%d\n", ptr->data);
      ptr = ptr->next;
   }
}
struct Node *insertEnd(struct Node *head, int data)
{
   struct Node *ptr;
   ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr->data = data;
   struct Node *p = head;
   while (p->next != NULL)
   {
      p = p->next;
   }
   p->next = ptr;
   ptr->next = NULL;
   return head;
}
struct Node *deleteEnd(struct Node *head)
{
   struct Node *end = head;
   struct Node *prev = NULL;
   while (end->next!=NULL)
   {
      prev = end;
      end = end->next;
   }
   prev->next = NULL;
   // Make sure to free unused memory
   free(end);
}
int main()
{
   struct Node *head;
   struct Node *second;
   struct Node *third;
   head = (struct Node *)malloc(sizeof(struct Node));
   second = (struct Node *)malloc(sizeof(struct Node));
   third = (struct Node *)malloc(sizeof(struct Node));

   head->data = 10;
   head->next = second;

   second->data = 20;
   second->next = third;

   third->data = 30;
   third->next = NULL;

   Traversal(head);
   head = insertEnd(head, 56);
   Traversal(head);
   deleteEnd(head);
   Traversal(head);
}