#include <iostream>
using namespace std;

struct Tree
{
    int data;
    Tree *left, *right;
};

struct Tree *newNode(int data)
{
    struct Tree *node = new Tree;
    node->data=data;
    node->left=NULL;
    node->right=NULL;

    return node;
}

int main()
{
    struct Tree *root;
    root=          newNode(1);
    /*          
                1
               / \
            NULL NULL  
    */
    root->left=     newNode(2);
              
    //            1
    //           / \
    //          2 NULL  
    
    root->right=    newNode(3);
    //              1
    //             / \
    //            2   3

    root->left->left=   newNode(4);
    //              1
    //             / \
    //            2   3
    //          / \  / \
    //         4 \0 \0 \0
    //        / \
    //      \0  \0
    getchar();
    return 0;
}