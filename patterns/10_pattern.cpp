#include <bits/stdc++.h>
using namespace std;

int main()
{

    //first approach
    int count = 1;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << count<<" ";
            count++;
        }
        cout << endl;
    }

    cout<<"-------------------------------"<<endl;

    //second approach
    for(int row =1; row<=5; row++){
        for(int col=1; col<=5; col++){
            cout<<((row-1)*5+col)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// pattern Que 10

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25
