/*
Write a C program to input electricity unit charge and 
calculate the total electricity bill according to the given condition:

For First 50 Units Rs.0.50/unit
For next 100 Units Rs.0.75/unit
For next 100 Units Rs.1.20/unit
For unit above 250 Rs.1.50/unit
An additional surcharge of 20% is added to the bill.

Input Format:
Integer value indicating the number of units consumed


Output Format:
Print the output with floating point value indicating the total cost rounded off to two decimal places

Sample Input 1:
300

Sample Output 1:
354.00
*/

#include <stdio.h>
int main() {
    int units;
    float total_cost = 0,surcharge=0;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 50) {
        total_cost = units * 0.50;
    } else if (units <= 150) {
        total_cost = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        total_cost = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        total_cost = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    surcharge = total_cost * 0.20;
    total_cost = total_cost + surcharge;
    
    
    printf("Total electricity bill: %.2f\n", total_cost);

    return 0;
}