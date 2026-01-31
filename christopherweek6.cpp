//arrays
#include <iostream>
using namespace std;

int main() {
    int A[20];
    int even[20], odd[20];
    int eCount = 0, oCount = 0;

    // Input values (between 1 and 100)
    for(int i = 0; i < 20; i++) {
        cin >> A[i];
    }

    // Separate even and odd values
    for(int i = 0; i < 20; i++) {
        if(A[i] % 2 == 0) {
            even[eCount] = A[i];
            eCount++;
        } else {
            odd[oCount] = A[i];
            oCount++;
        }
    }

    // Display even numbers
    for(int i = 0; i < eCount; i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    // Display odd numbers
    for(int i = 0; i < oCount; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;

    return 0;
}

