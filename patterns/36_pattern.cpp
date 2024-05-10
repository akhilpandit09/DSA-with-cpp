#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter a number:";
    cin >> n;

    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
            cout << "*";

        for (col = 1; col <= (2 * n - 2 * row); col++)
            cout << " ";

        for (col = 1; col <=row; col++)
            cout << "*";

        cout << endl;
    }

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
            cout << "*";

        for (col = 1; col <= (2 * n - 2 * row); col++)
            cout << " ";

        for (col = 1; col <= row; col++)
            cout << "*";

        cout << endl;
    }

    return 0;
}