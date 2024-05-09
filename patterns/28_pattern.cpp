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
        for (char name= 'A'; name<='A'+row-1; name++)
        {
            cout << name;
        }
        cout << endl;
    }

    return 0;
}


//          A
//        A B
//      A B C
//    A B C D
//  A B C D E