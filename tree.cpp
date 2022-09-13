#include <iostream>
#include "tree.h"

using namespace std;

tree::tree()
{

}

void tree::preorder(int n)
{
    if (n == -1) return;
    cout << (char)(n+'A');
    preorder(arr[n][0]);
    preorder(arr[n][1]);
}

void tree::inorder(int n)
{
    if (n == -1) return;
    inorder(arr[n][0]);
    cout << (char)(n+'A');
    inorder(arr[n][1]);
}

void tree::postorder (int n)
{
    if (n== -1) return;
    postorder(arr[n][0]);
    postorder(arr[n][1]);
    cout << (char)(n+'A');
}
