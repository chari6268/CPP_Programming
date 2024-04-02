/*
Given the first 2 terms A and B of a Geometric Series. The task is to find the Nth term of the series.

Input:
A = 2 
B = 3
N = 1
Output: 2

Input:
A = 1
B = 2
N = 5
Output: 16
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, N;
    cout << "Enter value of A : ";
    cin >> A;
    cout << "Enter value of B : ";
    cin >> B;
    cout << "\nEnter value of N : ";
    cin >> N;
    // Formula for nth term in geometric progression is given by T_n = A * r^(n-1)
    double result = A * pow(B, N - 1);
    cout << "\nThe " << N << "th term of the series is : " << result;

    return 0;
}