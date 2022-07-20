// #include<bits/stdc++.h>
// using namespace std;

// int search(int inorder[], int start, int end, int curr){
//     for (int i = start; i <= end; i++)
//     {
//         return i;
//     }
//     return -1;
    
// }

// void inorderPrint(Node* root){
//     if (root=NULL)
//     {
//         return;
//     }
    
//     inorderPrint(root->left);
//     cout<<root->data<<" ";
//     inorderPrint(root->right);

// }

// Node* buildTree(int preorder[], int inorder[], int start, int end){
//     static int idx = 0;
//     if (start>end)
//     {
//         return NULL;
//     }
    

//     int curr = preorder[idx];
//     idx++;
//     Node* node = new Node(curr);

//     if (start == end)
//     {
//         return node;
//     }
    

//     int pos = search(inorder, start, end, curr);
//     node->left = buildTree(preorder, inorder, start, pos-1);
//     node->right = buildTree(preorder, inorder, pos+1, end);
// }

// int main(int argc, char const *argv[])
// {
//     int preorder[] = {1, 2, 4, 3, 5};
//     int inorder[] = {4, 2, 1, 5, 3};
//     return 0;
// }
