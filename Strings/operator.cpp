#include<iostream>
#include<vector>
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
Node *buildTree(vector <int> nodes){

    index++;
    if(nodes[index] == -1) return NULL;
    Node *currNode = new Node(nodes[index]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

void preOrder(Node* root){
    if(root == NULL) return ;
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";

} 
int main(){


    vector <int> nodes = {1,2,-1 , 3,-1 , -1 , 3,-1,-1};
    Node *root = buildTree(nodes);
    preOrder(root);

    return 0;

}