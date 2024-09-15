#include <iostream>
using namespace std;
int main() {
    double x;
    cout << "Enter the temperature: ";
    cin >> x;
    double y = (x * 9/5) + 32;
    cout << "The temperature in fahrenheit: " << y << endl;
    return 0;
}
