/*
You have to input 5 space-separated values: int, long, char, float and double respectively.
Print each value on a new line in the same order it is received as input. 
Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

Example Input:
5 1234567891231 z 24.23 1214523.028352 

Example Output:
5
1234567891231
z
24.230
1214523.028352000

*/

/*
#include<stdio.h>
int main(){
    int i;
    long l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    printf("%d\n%ld\n%c\n%.6f\n%.15lf", i, l, c, f, d);
    return 0;
}
*/

#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
    cout<<"enter the numbers :"<<endl;
    int i;
    long l;
    char ch;
    float f;
    double d;
    cin>>i >>l >>ch >>f >>d;
    cout<<i<<endl;
    cout<<l<<endl;
    cout<<ch<<endl;
    printf("%.3f\n",f);
    printf("%.9f\n",d);
}