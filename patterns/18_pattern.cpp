#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << (char)('a'+(row - 1)) << " ";
        }
        cout << endl;
    }
    return 0;
}

// a
// b b
// c c c
// d d d d
// e e e e e
