#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout << (a + b) / 2 + sqrt((a - b) * (a - b)) / 2;
    return 0;
}