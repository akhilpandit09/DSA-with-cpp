#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << (char)('A' + (col - 1)) << " ";
        }
        cout << endl;
    }
    return 0;
}

// A
// A B
// A B C
// A B C D
// A B C D E