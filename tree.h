#ifndef TREE_H
#define TREE_H


class tree
{
public:
    tree();
    int arr[50][2];
    void preorder(int n);
    void inorder(int n);
    void postorder(int n);
};

#endif // TREE_H
