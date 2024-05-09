#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    int n;
    cout<<"Enter any number:";
    cin>>n;
    for(row=1; row<=n; row++){
        for (col=1; col <= n-row; col++)
        {
            cout << " ";
        }
        for(col=1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}


//      *
//     **
//    ***
//   ****
//  *****