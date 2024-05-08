#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << 10 + (col - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}


    //    10
    //    10 11
    //    10 11 12
    //    10 11 12 13
    //    10 11 12 13 14
    //    10 11 12 13 14 15
