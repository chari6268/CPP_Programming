/*
Get three inputs in the format-integer, character, integer. 
The inputs are all separated by spaces. 
Perform the operation with the integer values based on the character(+,-,*,/).
Display the calculated value as the output.

Input Format:
Accept an Integer, Character,Integer as input

Output Format:
Print the output as Integer  

Sample Input 1:
17 + 15


Sample Output 1:
32
*/

#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    switch (c) {
        case '+' : 
            printf("%d\n",a+b);
            break;
        case '-' : 
            printf("%d\n",a-b);
            break;
        case '*' : 
            printf("%d\n",a*b);
            break;
        case '/' : 
            if(b!=0){
                printf("%d\n",a/b);
            }else{
                printf("Error! Division By Zero.\n");
            }
            break;
        default : printf("Error! Invalid Operator.\n");
    }
    return 0;
}