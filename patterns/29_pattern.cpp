#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - row; col++)
        {
            cout << " ";
        }
        for (col=1; col<=row ; col++)
        {
            cout << row - (col-1);
        }
        cout << endl;
    }

    return 0;
}

//            1
//          2 1
//        3 2 1
//      4 3 2 1
//    5 4 3 2 1