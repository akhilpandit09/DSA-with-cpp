#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    for(row=1; row<=5; row++){
        for(col=1; col<=(5-(row-1)); col++ ){
            cout<< col <<" ";
        }
        cout<<endl;
    }
    return 0;
}

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
