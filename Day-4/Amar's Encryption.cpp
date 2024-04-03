/*
Amar has created his own encryption technique to encrypt a number. 
He makes use of the logic behind factorial. 
In a factorial, we multiply the number by its previous number and 
so on but if we want to encrypt a number we don’t multiply in every step 
like in the case of factorial but multiply, divide, add and subtract and repeat in the same order.
So your task is to find the encrypted form of a number using the Amar encryption technique and 
you were being provided with the number.

Sample Input 1:
5
Sample Output 1:
7
Explanation For Sample Input 1:
For the first test case, given number is ‘5’ so using the ninja encryption 
technique we follow the steps: ( 5 * 4 / 3 + 2 - 1 ) = 7

n = 1 ---> 1
n = 2 ---> 2*1 = 2
n = 3 ---> 3*2/1 = 6
n = 4 ---> 4*3/2+1 = 7
n = 5 ---> 5*4/3+2-1 = 7 because 20/3 is 6.66 which becomes 6 when rounded off
n = 6 ---> 6*5/4+3-2*1 = 8 
n = 7 ---> 7*6/5+4-3*2/1 = 42/5+4-6/1 = 8+4-6 = 6 
n = 8 ---> 8*7/6+5-4*3/2+1 = 56/6+5-12/2+1 = 9+5-6+1 = 14-6+1 = 9

n = 16 --->16*15/14+13-12*11/10+9-8*7/6+5-4*3/2+1 = 240/14+13-132/10+9-56/6+5-12/2+1 = 17+13-13+9-9+5-6+1 = 30-4-4-5 = 30-13 = 17
finally we concluded

if n <= 2 then n
if n <= 4 then n+3
if (n-4)%4 == 0 then n+1
if (n-4)%4 <= 2 then n+2
else n-1

*/

#include<bits/stdc++.h>
using namespace std;
int encr(int n){
    if(n <= 2){
        return n;
    }else if(n <= 4){
        return n+3;
    }else if((n-4)%4 == 0){
        return n+1;
    }else if((n-4)%4 <= 2){
        return n+2;
    }else{
        return n-1;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<encr(n);
    return 0;
}