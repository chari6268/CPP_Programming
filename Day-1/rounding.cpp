/*
Accept a floating point value and print it with 20 width space and round off to 4 decimal places.

Sample Input 1:
19.45789

Sample Output 1:
19.4579


Sample Input 2:
12.45678


Sample Output 2:
12.4568
*/
#include<stdio.h>
int main(){
    float  num;
    printf("Enter the number:\n");
    scanf("%f",&num);
    //Rounding off the number to 4 decimal places using printf function
    printf("\n%20.4f\n",num);
    return 0;
}