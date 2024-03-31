/*
Write a program to print corresponding day based on given input

Input Format:
Accept integer as a input


Output Format:
Print corresponding day(0-6) or
"Invalid" day- Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday

Sample Input 1:
0

Sample Output 1:
Sunday


Sample Input 2:
6

Sample Output 2:
Saturday
*/

#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    
    switch (n) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        default: printf("Invalid\n"); break;
    }
    return 0;
}