#include <iostream>
#include <vector>
#include<queue>
using namespace std;
class Node{

    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

static int index = -1;

void levelOrder(Node *root){

    queue <Node *> q;

    q.push(root);
    if(root == NULL) return ;
    while(!q.empty()){
        Node *curr = q.front();
        q.pop();
    }
    

    

}


  Node *buildTree(vector<int> nodes){

    index++;
    if(nodes[index] == -1){

        return NULL;

    }

    Node *currNode = new Node(nodes[index]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);



    return currNode;

  }



void preOrder(Node *root){ // preOrder
    if(root == NULL) return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
void postOrder(Node *root){
    if(root == NULL) return ;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(Node *root){
    if(root == NULL) return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main()
{

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node *root = buildTree(nodes);
    
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    

    return 0;
}