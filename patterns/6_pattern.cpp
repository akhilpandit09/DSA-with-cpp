#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 5; col >= 1; col--)
        {
            cout << col * col << " ";
        }
        cout << endl;
    }
    return 0;
}

// pattern Que 6

// 25 16 9 4 1
// 25 16 9 4 1
// 25 16 9 4 1
// 25 16 9 4 1
// 25 16 9 4 1
