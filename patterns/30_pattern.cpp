#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, n, col;
    char name = 'A';
    cout << "Enter a number (5): ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (col=1; col<=row; col++)
        {
            cout << name;
        }
        name++;
        cout << endl;
    }

    return 0;
}

//          A
//        B B
//      C C C
//    D D D D
//  E E E E E