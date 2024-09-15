#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the number of students: ";
    cin >> x;
    cout << 50 - x % 50 << endl;
    return 0;
}

