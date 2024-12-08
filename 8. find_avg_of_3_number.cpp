#include <iostream>
using namespace std;

int main() {
    int num1 , num2 , num3;
    float sum , avg;


    cout << "Enter three Numbers:";
    cin >> num1 >> num2 >> num3;


    sum = num1 + num2 + num3;
    avg = sum / 3 ;

    cout << "Average of the three numbers :" << avg ;

}