/*
You are given a character called ch, print the ASCII value of the character.

Example Input:
ch = 'a'

Example Output:
97
*/
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    printf("The ASCII value of %c is %d.",ch,(int)ch);
    return 0;
}
