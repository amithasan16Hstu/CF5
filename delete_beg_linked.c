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
struct Node *insertBeg(struct Node *head,int data)
{
          struct Node *ptr;
          ptr=(struct Node*)malloc(sizeof(struct Node));
          ptr->next=head;
          ptr->data=data;
          return ptr;
}
struct Node *deleteBeg(struct Node *head)
{
         struct Node *ptr=head;
         head=head->next;
         free(ptr);
         return head;
          
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
          printf("Main Linked List:\n");
          Traversal(head);
          printf("After Inserting into Linked List:\n");
          head = insertBeg(head, 56);
          Traversal(head);
          printf("After Deleting into Linked List:\n");
          head = deleteBeg(head);
          Traversal(head);
}