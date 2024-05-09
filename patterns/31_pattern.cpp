#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter a number:";
    cin >> n;
    for (row =n; row >= 1; row--)
    {
        for (col = 1; col <= row-1; col++)
        {
            cout << " ";
        }
        for (col = n; col >= row; col--)
        {
            cout << col;
        }
        cout << endl;
    }

    return 0;
}

//              5
//            5 4
//          5 4 3
//        5 4 3 2 
//      5 4 3 2 1