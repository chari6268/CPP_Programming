/*
You are given an integer 'n'. Calculate the sum of even and odd digits of 'n', represented in decimals.
Even and odd do not refer to the position of the digit but to the polarity of the digit.

Example:
Input: n = 1986.
Output: 14 10

*/

#include<stdio.h>
int main() {
    int n, rem, sum_even=0,sum_odd=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while(n != 0) {
        rem = n % 10;
        n /= 10;
        if (rem % 2 == 0)
            sum_even += rem;
        else
            sum_odd += rem;
    }
    printf("\n%d %d\n", sum_even,sum_odd);
    
    return 0;
}