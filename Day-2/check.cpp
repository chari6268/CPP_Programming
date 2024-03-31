/*
Write a program that takes a character as input and prints either 1, 0, or -1 according to the following rules.

1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet

Sample Input 1 :
v
Sample Output 1 :
0

Sample Input 2 :
V
Sample Output 2 :
1

Sample Input 3 :
#
Sample Output 3 :
-1
*/

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character : ");
    scanf("%c",&ch);
    int flag = 0;
    if((ch >= 'A' && ch <= 'Z')){
        flag = 1;
    }else if((ch >= 'a' && ch <= 'z')){
        flag = 0;
    }else{
        flag  = -1;
    }
    printf("%d\n",flag);
    return 0;
}