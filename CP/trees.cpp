/*Demo program to illustrate the tree data stucture*/
#include <iostream>
using namespace std;

struct NODE 
{
    int info;
    struct NODE *left;
    struct NODE *right;
};

/*Funtion Prototypes*/
struct NODE *Create_tree(int data,struct NODE *node);
void Output(struct NODE *tree, int level);

/* "node" is the object of the DATA structure "NODE"*/
struct NODE *Create_tree(int data,struct NODE *node)
{
    cout<<"\nEntered Create_tree function";
    if(node == NULL)
    {
        node= new NODE;
        node->info=data;
        node->left= NULL;
        node->right= NULL;
    }

    if(node->info >= data)
        node->left=Create_tree(data,node->left);
    else
        node->right=Create_tree(data,node->right);
    
    return(node);
}

/*Functio to display TREE data*/
void Output(struct NODE *tree,int level)
{
    int i;
    if(tree)
    {
        Output(tree->right, level+1);
        
        cout<<endl;
        
        for(i=0 ; i<level; i++)
            cout<<" ";
        cout<<tree->info<<endl;

        Output(tree->left, level+1);
    }
}

int main()
{
    int data = 0;
    char choice;
    struct NODE *tree = NULL;
    tree = new NODE;
    
    cout<<"\nEnter '(B/b)' to break, '(C/c)' to continue: "<<endl;
    cin>>choice;

    while(choice != 'b' || choice != 'B')
    {
        cout<<"\nEnter data to enter in Node:  ";
        cin>>data;
        tree = Create_tree(data, tree);
        
        cout<<"\nTree is : ";
        Output(tree,1);
        
        cout<<"\nEnter '(B/b)' to break, '(C/c)' to continue: "<<endl;
        cin>>choice;
    }
    return 0;
}

