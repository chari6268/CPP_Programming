/*
You are given an integer ‘N’.
For example, if the 'N' == 5, the table pattern is as follows:
1
11
121
1221
12221
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((j == 1) || (j == i)){
                cout<<1;
            }else{
                cout<<2;
            }
        }
        cout<<"\n";
    }
    return 0;
}