/*
Given an integer N. Find the number of digits that appear in its factorial. 
Example: If N = 5, then output should be 3 because 1! + 2! + 3! + 4! + 5! == 120 has only three distinct numbers 
i.e., 1, 2 and 0
Output:3

Input: N = 120
Output: 199

*/
#include <bits/stdc++.h>
using namespace std;
int fact(int n);
int count(int f);
int main() 
{
    int n,f,c;
    cin>>n;
    f=fact(n);
    cout<<"The factorial is "<<f<<endl;
    c=count(f);
    cout<<"The number of digits in "<<f<<" are "<<c<<endl;
    return 0;
}
int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int count(int num){
    int count = 0;
    while (num != 0) {
      num /= 10;
      ++count;
    }
    return count;
}