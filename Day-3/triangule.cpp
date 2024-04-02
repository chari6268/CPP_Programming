/*
Check whether the given number is a triangular number.
Note: A number is termed as a triangular number 
if we can represent it in the form of a triangular grid of points such that 
the points form an equilateral triangle and each row contains as many points as the row number,
i.e., the first row has one point, the second row has two points, 
the third row has three points and so on.
Ex:
n == 10
The starting triangular numbers are 1, 3 (1+2), 6 (1+2+3), 10 (1+2+3+4).
*/
#include <iostream>
using namespace std;
bool isTriangular(int n) {
    int sum = 0;
    for (int i = 1; sum < n; i++) {
        sum += i;
        if (sum == n) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isTriangular(n)) {
        cout << n << " is a triangular number." << endl;
    } else {
        cout << n << " is not a triangular number." << endl;
    }

    return 0;
}
