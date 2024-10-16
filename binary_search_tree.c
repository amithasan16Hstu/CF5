#include <stdio.h>
#include <stdlib.h>

// Define a structure for a tree node
struct TreeNode
{
   int data;
   struct TreeNode *left;
   struct TreeNode *right;
};
// Function to create a new node
struct TreeNode *createNode(int data)
{
   struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
   if (newNode == NULL)
   {
      perror("Memory allocation failed");
      exit(EXIT_FAILURE);
   }
   newNode->data = data;
   newNode->left = newNode->right = NULL;
   return newNode;
}

// Function to insert a new node into the BST
struct TreeNode *insert(struct TreeNode *root, int data)
{
   if (root == NULL)
   {
      return createNode(data);
   }

   if (data < root->data)
   {
      root->left = insert(root->left, data);
   }
   else if (data > root->data)
   {
      root->right = insert(root->right, data);
   }

   return root;
}

// Function to perform an inorder traversal of the BST
void inorderTraversal(struct TreeNode *root)
{
   if (root != NULL)
   {
      inorderTraversal(root->left);
      printf("%d ", root->data);
      inorderTraversal(root->right);
   }
}

int main()
{
   struct TreeNode *root = NULL;

   // Insert nodes into the BST
   root = insert(root, 50);
   insert(root, 30);
   insert(root, 20);
   insert(root, 40);
   insert(root, 70);
   insert(root, 60);
   insert(root, 80);

   printf("Inorder traversal of the BST: ");
   inorderTraversal(root);
   printf("\n");

   return 0;
}
