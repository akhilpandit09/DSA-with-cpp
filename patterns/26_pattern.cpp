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
            cout<<row;
        }
        cout<<endl;
        
    }

    return 0;
}


//          1
//        2 2
//      3 3 3
//    4 4 4 4   
//  5 5 5 5 5

//          1
//        1 2
//      1 2 3
//    1 2 3 4
//  1 2 3 4 5