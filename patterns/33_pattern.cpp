#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, row, col;
    cout << "Enter a number:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

//     *
//    ***
//   *****
//  *******
// *********