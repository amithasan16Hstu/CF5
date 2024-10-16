// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//    int data;
//    struct Node *next;
// };
// void Traversal(struct Node *head)
// {
//    struct Node *ptr = head;
//    printf("%d ", ptr->data);
//    ptr = ptr->next;
//    while (ptr != head)
//    {
//       printf("%d ", ptr->data);
//       ptr = ptr->next;
//    }
//    /* do{
//       printf("%d ",ptr->data);
//       ptr=ptr->next;
//    }while(ptr!=head)
//    */
// }
// struct Node *insert(struct Node *head, int data)
// {
//    struct Node *ptr;
//    ptr = (struct Node *)malloc(sizeof(struct Node));
//    ptr->data = data;
//    struct Node *p = head->next;
//    while (p->next != head)
//    {
//       p = p->next;
//    }
//    p->next = ptr;
//    ptr->next = head;
//    head = ptr;
//    return head;
// }
// int main()
// {
//    struct Node *head;
//    struct Node *second;
//    struct Node *third;
//    head = (struct Node *)malloc(sizeof(struct Node));
//    second = (struct Node *)malloc(sizeof(struct Node));
//    third = (struct Node *)malloc(sizeof(struct Node));

//    head->data = 10;
//    head->next = second;

//    second->data = 20;
//    second->next = third;

//    third->data = 30;
//    third->next = NULL;

//    Traversal(head);
//    head = insert(head, 56);
//    Traversal(head);
// }
#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}
 
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}
 
int main(){
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 4;
    head->next = second;
 
    // Link second and third nodes
    second->data = 3;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = head;
 
    return 0;
}
