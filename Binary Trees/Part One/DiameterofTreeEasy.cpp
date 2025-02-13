#include<iostream>
#include<algorithm>
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

int height(Node *root){

    // diameter passes through root only;

    if(root == NULL ) return 0;

    return 1 + max( height(root->left) , height(root->right));
}

int diameter(Node *root){

    if(root == NULL) return 0;

    int currDiameter = 1 + height(root->left)  + height(root->left);
    int leftDiameter = diameter(root->left);
    int rightDiameter = diameter(root->right);

    return  max(currDiameter , max(leftDiameter , rightDiameter));


}

int diameterTwo(Node *root ){

    if(root == NULL) return 0;


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

    // cout<<"The Height of tree is " <<height(root)<<endl;
    cout<<"The Diameter is "<<diameter(root);

    return 0;
}