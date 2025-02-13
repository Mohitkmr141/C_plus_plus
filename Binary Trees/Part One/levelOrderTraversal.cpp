#include<iostream>
#include<vector>
#include<queue>


using namespace std;
class Node{

    public:
    int data;
    Node *left;
    Node *right;


    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;

    }


};

int sumOfNodes(Node *root){

if(root == NULL){
  return INT_MIN;
}
return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);

}
int countNodes(Node *root){
  if(root == NULL){
    return 0;
  }
  
  
  return 1 + countNodes(root->left) + countNodes(root->right);
}

void levelOrderTraversal(Node *root){

  queue <Node *> q;
  if(root == NULL){
    return;
  }
  q.push(root);
  while(!q.empty()){
 Node *currNode = q.front();
 cout<<currNode->data<<" ";
 q.pop();

    if(currNode->left!= NULL){
      q.push(currNode->left);

    }
    if(currNode->right!= NULL){
      q.push(currNode->right);

    }

  }
}
int main(){


Node *root = new Node(1);
Node *a = new Node(2);
Node *b = new Node(3);
Node *c = new Node(4);
Node *d = new Node(5);
Node *e = new Node(6);
Node *f = new Node(7);
root->left = a;
root->right = b;
a->left = c;
a->right = d;
b->left = e;
b->right = f;


// levelOrderTraversal(root);

// cout<<"The Number of counts are "<<countNodes(root)<<endl;

cout<<"The Sun are "<<sumOfNodes(root)<<endl;








    


    return 0;
}