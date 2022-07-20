#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

Node* buildtree(Node* root) {

    cout<< " Enter The data "<< endl;
    int data;
    cin>>data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout<< " ENter data for inserting in left "<<endl;
    root->left = buildtree(root->left);
    cout<< " ENter data for inserting in right "<<endl;
    root->right = buildtree(root->right);
    return root;
    
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<endl;
        q.pop();

        if (temp = NULL)
        {
            cout<<endl;
            if (q.empty())
            {
                q.push(NULL);
            }
            
        }
        else{
            if (temp ->left)
        {
            q.push(temp->left);
        }
        if (temp -> right)
        {
            q.push(temp->right);
        }
        }
        
        
        
    }
    
}

int main(int argc, char const *argv[])
{
    Node* root = NULL;
    root = buildtree(root);
    levelOrderTraversal(root);
    
    return 0;
}
