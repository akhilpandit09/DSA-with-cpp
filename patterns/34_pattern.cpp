#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number:";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << col<<" ";
        }
        for(col = row-1; col>=1; col--){
            cout<<col<<" ";
        }
        cout << endl;
    }

    return 0;
}

//      1
//    1 2 1
//   1 2 3 2 1
//  1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1