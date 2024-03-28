/*
Accept a number . If a number starts with digit 0, it indicates a octal value.
If a number starts with 0x it indicates that the number is a hexadecimal value. 
Print the corresponding decimal value.

Sample Input 1:
0xA

Sample Output 1:
10


Sample Input 2:
027

Sample Output 2:
23
*/
#include<stdio.h>
int main() {
    char num[50];
    scanf("%s",num);
    if(num[0] == '0' && num[1] == 'x'){ //Hexadecimal  input
        int i;
        printf("%d",0);
        for(i=2;num[i]!='\0';i++)
            printf("%d",((num[i]-'0')%8 + (num[i]-'0')));//Converting each digit to decimal
    }else if(num[0]=='0'){   //Octal input
        int base = 8;
        int res = 0;
        int i;
        for(i=1;num[i]!='\0';i++){
            res = res * base + (num[i] - '0');
        }
        printf("%d",res);
    }
    else{
        printf("Entered number is not in Octal or Hexadecimal format");
    }
	return 0;
}