#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "Largest: " << num1 << endl;
        cout << "Smallest: " << num2 << endl;
    } else if (num1 < num2) {
        cout << "Largest: " << num2 << endl;
        cout << "Smallest: " << num1 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
