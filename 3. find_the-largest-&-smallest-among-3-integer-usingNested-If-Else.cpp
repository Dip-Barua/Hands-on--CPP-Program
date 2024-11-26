#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        if (num1 > num3) {
            cout << "Largest: " << num1 << endl;
        } else {
            cout << "Largest: " << num3 << endl;
        }
    } else {
        if (num2 > num3) {
            cout << "Largest: " << num2 << endl;
        } else {
            cout << "Largest: " << num3 << endl;
        }
    }

    if (num1 < num2) {
        if (num1 < num3) {
            cout << "Smallest: " << num1 << endl;
        } else {
            cout << "Smallest: " << num3 << endl;
        }
    } else {
        if (num2 < num3) {
            cout << "Smallest: " << num2 << endl;
        } else {
            cout << "Smallest: " << num3 << endl;
        }
    }

    return 0;
}
