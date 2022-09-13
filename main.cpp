#include <iostream>
#include <tree.h>

using namespace std;

int main()
{
    tree t;
    int k;
        cin >> k;
        for (int i=0; i<k; i++)
        {
            char x, y, z;
            cin >> x >> y >> z;
            x = x-'A';
            if (y == '.')
            {
                t.arr[x][0] = -1;
            }
            else
            {
                t.arr[x][0] = y-'A';
            }
            if(z == '.')
            {
                t.arr[x][1] = -1;
            }
            else
            {
                t.arr[x][1] = z-'A';
            }
        }
        t.preorder(0);
        cout << '\n';
        t.inorder(0);
        cout << '\n';
        t.postorder(0);
        cout << '\n';
        return 0;
}
