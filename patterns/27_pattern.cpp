#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    int n;
    cout << "Enter any number:";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    return 0;
}


//          1
//        1 2
//      1 2 3
//    1 2 3 4
//  1 2 3 4 5

//          A
//        A B
//      A B C
//    A B C D
//  A B C D E