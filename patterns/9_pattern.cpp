#include <bits/stdc++.h>
using namespace std;

int main()
{

    // first approach

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            char name = 'a' + col - 1;
            cout << name << " ";
        }
        cout << endl;
    }

    cout<<"---------------------------------------"<<endl;

    // second approach

    for(int row = 1; row <=5; row++){
        for (char col = 'a'; col <= 'e'; col++)
        {
            cout << col << " ";
        }
        cout<<endl;
    }
    cout<<"-------------------------------------"<<endl;

    //third approach
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            char name = 'a' ;
            cout << char(name + col - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}

// pattern Que 9

// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e
