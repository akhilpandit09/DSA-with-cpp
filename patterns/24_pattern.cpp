#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    for (row = 4; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << (char)('A' + (col - 1)) << " ";
        }
        cout << endl;
    }
    return 0;
}

// A B C D
// A B C
// A B
// A
