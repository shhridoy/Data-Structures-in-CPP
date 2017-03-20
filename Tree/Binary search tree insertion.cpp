#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left = NULL;
    Node* right = NULL;
};
Node* Root = NULL;

void Add(int value){
    Node* nptr = new Node;
    nptr->data = value;
    nptr->left = NULL;
    nptr->right = NULL;

    if(Root == NULL){
        Root = nptr;
    }
    else{
        Node* tptr = Root;
        while(true){
            if(tptr->data > value){ /// going to left
                if(tptr->left == NULL){
                    tptr->left = nptr;
                    break;
                }
                else{
                    tptr = tptr->left;
                }
            }
            else{ /// going to right
                if(tptr->right == NULL){
                    tptr->right = nptr;
                    break;
                }
                else{
                    tptr = tptr->right;
                }
            }
        }
    }
}

void Inorder(Node* node){
    if(node != NULL){
        Inorder(node->left);
        cout<<node->data<<" ";
        Inorder(node->right);
    }
}

void Preorder(Node* node){
    if(node != NULL){
        cout<<node->data<<" ";
        Preorder(node->left);
        Preorder(node->right);
    }
}

void Postorder(Node* node){
    if(node != NULL){
        Postorder(node->left);
        Postorder(node->right);
        cout<<node->data<<" ";
    }
}

int main()
{
    Add(50);
    Add(15);
    Add(75);
    Add(87);
    Add(77);
    Add(30);
    Add(64);
    Add(99);
    Add(18);
    Add(3);
    Add(35);

    cout<<"In-Order BST: "<<endl;
    Inorder(Root);
    cout<<"\n\nPre-Order BST: "<<endl;
    Preorder(Root);
    cout<<"\n\nPost-Order BST: "<<endl;
    Postorder(Root);
    cout<<endl;

    return 0;
}
