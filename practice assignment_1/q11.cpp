// WAP to count the number of 1 bits in an integer input by the user.

#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    int originalNumber = n; 

    do {
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    } while (n != 0);

    cout << "The number of 1 bits in the binary representation of " << originalNumber << " is: " << count << endl;

    return 0;
}
