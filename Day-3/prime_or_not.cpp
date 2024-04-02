/*
A prime number is a number which is only divisible by 1 and itself.
Given number N check if it is prime or not.

Input:
N = 5
Output: True

Input:
N = 4
Output: False
*/
#include <iostream>
using namespace std;
int main()
{
    int n,c=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
        cout<<"True";
    else 
        cout<<"False";
    return 0;
}