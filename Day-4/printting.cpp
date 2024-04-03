/*
You are given an integer ‘N’.

You must print ‘N’ outputs, where ‘i’ is -

‘HelloWorld’, if ‘i’ is divisible by 3 and 5.
‘Hello’, if ‘i’ is divisible by 3.
‘World’, if ‘i’ is divisible by 5.
‘i’, if ‘i’ is not divisible by 3 and 5.

Example:
Input:
N = 4
Output:
1 2 Hello 4
Explanation: 1, 2, and 4 are not divisible by 3 and 5. 3 is divisible by 3, so we return ‘Hello’.

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;cin>>num;
    for(int n=1;n<=num;n++){
        if((n%3 == 0)&&(n%5 == 0)){
            cout<<"HelloWorld"<<" ";
        }else if((n%3 == 0)){
            cout<<"Hello"<<" ";
        }else if((n%5 == 0)){
            cout<<"World"<<" ";
        }else{
            cout<<n<<" ";
        }
    }
    return 0;
}