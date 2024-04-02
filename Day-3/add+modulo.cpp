/*
Given two numbers a and b, find the sum of a and b. 
Since the sum can be very large, find the sum modulo 109+7.

Input:
a = 9223372036854775807
b = 9223372036854775807
Output: 582344006
Explanation: 
9223372036854775807 + 9223372036854775807 
= 18446744073709551614.
18446744073709551614 mod (109+7)
= 582344006

*/

#include <iostream>
using namespace std;
int main() {
    unsigned long long a,b,sum,res;
    cin>>a >>b;
    sum=a+b;
    res=sum%(1000000000+7);
    cout<<res;
    return 0;
}