/*
Accept a number as input which will be 1 or 2 ,  If it is 1, print 2. If it is 2, print 1.
(without using conditional statement)

Input Format:
Accept an integer value as input

Output Format:
If input is 1, print "2", If input is 2, print "1"
*/

#include <stdio.h>
int main() {
   int num;
   printf("Enter the number (1/2): ");
   scanf("%d", &num);
   // Using bitwise XOR operator to achieve this task without using if-else condition
   printf("%d\n", num ^ 3);
   
   return 0;
}