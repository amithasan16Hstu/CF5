#include <stdio.h>
#include <stdlib.h>
struct TreeNode
{
   int data;
   struct TreeNode *left;
   struct TreeNode *right;
};
struct TreeNode *createNode(int data)
{
   struct TreeNode *newnode;
   newnode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
   if (newnode == NULL)
   {
      perror("Failure");
      exit(EXIT_FAILURE);
   }
   newnode->data = data;
   newnode->left = newnode->right = NULL;
   return newnode;
}
struct TreeNode *insert(struct TreeNode *root, int data)
{
   if (root == NULL)
   {
      return createNode(data);
   }
   else if (data < root->data)
   {
      root->left = insert(root->left, data);
   }
   else if (data > root->data)
   {
      root->right = insert(root->right, data);
   }
   return root;
}
void Traversal(struct TreeNode *root)
{
   if(root!=NULL)
   {
      Traversal(root->left);
      printf("%d ",root->data);
      Traversal(root->right);
   }
}
int main()
{
   struct TreeNode *root=NULL;
   root=insert(root,30);
   insert(root,50);
   insert(root,40);
   insert(root,100);
   insert(root,10);
   insert(root,20);
   insert(root,60);
   Traversal(root);
   printf("\n");

}