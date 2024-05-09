#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, n;
    // char name = 'E';

    cout << "Enter a number:";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        for (col = row; col <= n; col++)
        {
            cout << " ";
        }
        for (col = 'E'; col >= 'E' - row+1; col--)
        {
            cout <<(char) col;
        }
        cout << endl;
    }

    return 0;
}

//              E
//            E D
//          E D C
//        E D C B
//      E D C B A
