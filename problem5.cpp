#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter a height of Sardor: ";
    cin >> x;
    float y;
    cout << "Enter a height of Mike: ";
    cin >> y;
    y = y * 30.48;
    cout << (y > x);
    return 0;
}
