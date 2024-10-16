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
// struct Node *insert(struct Node *head,int data)
// {
//           struct Node *ptr;
//           ptr=(struct Node *)malloc(sizeof(struct Node));
//           ptr->next=head;
//           ptr->data=data;
//           return ptr;
// }
struct Node *insertBet(struct Node *head, int data, int index)
{
          struct Node *ptr;
          ptr = (struct Node *)malloc(sizeof(struct Node));
          struct Node *p = head;
          int i = 0;
          while (i != index - 1)
          {
                    p = p->next;
                    i++;
          }
          ptr->data = data;
          ptr->next = p->next;
          p->next = ptr;
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
          // head=insert(head,16);
          head = insertBet(head, 16, 1);
          Traversal(head);
}
