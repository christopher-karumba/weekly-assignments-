
#include <iostream>
using namespace std;

// Function using pass-by-reference and return-by-reference
double& findLargest(double& x, double& y, double& z) {
    if (x >= y && x >= z) {
        return x;
    } else if (y >= x && y >= z) {
        return y;
    } else {
        return z;
    }
}

int main() {
    double a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    double& largest = findLargest(a, b, c);

    cout << largest << endl;

    return 0;
}

