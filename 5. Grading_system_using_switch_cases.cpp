#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your marks (0 to 100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid Marks! Please enter a value between 0 and 100." << endl;
    } else {
        switch (score / 10) {
            case 10:
            case 9:
            case 8:
                cout << "Grade: A+" << endl;
                break;
            case 7:
                cout << "Grade: A" << endl;
                break;
            case 6:
                cout << "Grade: B" << endl;
                break;
            case 5:
                cout << "Grade: C" << endl;
                break;
            case 4:
                cout << "Grade: D" << endl;
                break;
            default:
                cout << "Grade: F" << endl;
        }
    }

    return 0;
}
