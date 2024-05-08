#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    // first approach
    for (row = 5; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    //second approach
    cout<<"--------------------------------------"<<endl;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= (5 - (row - 1)); col++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}

// * * * * *
// * * * *
// * * *
// * *
// *
