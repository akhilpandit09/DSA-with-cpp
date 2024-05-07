#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (char col = 1; col <= 6; col++)
        {
            cout<< (char) ('F' + (col -1))<<" ";
        }
        
        cout << endl;
    }
    return 0;
}


// F G H I J K  
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K

