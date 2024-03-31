/*
Get a 2 input from a user, first one for count of step and 2nd one for direction(only right and left).
Find the position after moving by left or right by the specified number of steps

Sample Input 1:
10 R

Sample Output 1:
(10,0)

Sample Input 2:
10 L

Sample Output 2:
(-10,0)


*/
#include<stdio.h>
int main(){
    int  n;
    char d;
    scanf("%d %c",&n,&d);
    if(d=='R'||d=='r'){
        printf("(%d,0)\n",n);
    }else if(d=='L'||d=='l'){
        printf("(-%d,0)",n);
    }else{
        printf("please  enter only R or r for Right and only L or l for Left\n");
    }
    return 0;
}