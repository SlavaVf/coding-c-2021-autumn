#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    double a = 0;
    double b = 0;
    cin >> a >> b;
    cout << (a + b) / 2 + sqrt((a - b) * (a - b)) / 2;
    return 0;
}