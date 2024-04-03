/*

You are given a number ‘N’ and a query ‘Q.’ 
If ‘Q’ is 1, then you have to return the sum of all integers from 1 to ‘N,’ 
else if ‘Q’ is equal to 2 then you have to return the product of all integers from 1 to ‘N.’ 
Since the product can be very large, return it modulo 10 ^ 9 + 7.

For example

Given ‘N’ = 4, ‘Q’ = 1. 
Then the answer is 10 because the sum of all integers between 1 and 4 are 1, 2, 3, and 4.
Hence 1 + 2 + 3 + 4 is equal to 10.

Sample Input 1 :
2
4 1 
4 2
Sample Output 1 :
10
24 

*/

#include<bits/stdc++.h>
using namespace std;
int sum_pro(int n,int q){
    if(q == 1){
        int s=0;
        for(int i=1;i<=n;i++){
            s+=i;
        }
        return s;
    }else if(q == 2){
        int p=1;
        for(int i=1;i<=n;i++){
            p*=i;
        }
        return p;
    }else{
        return -1;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int n , q;
        cin>>n>>q;
        cout<<sum_pro(n,q)<<endl;
    }
    return 0;
}
