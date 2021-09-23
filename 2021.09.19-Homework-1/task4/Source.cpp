#include <iostream>

using namespace std;

int main() {
    int v, t, s = 109;
    cin >> v >> t;
    cout << (v * t % 109 + 109) % 109;
    return EXIT_SUCCESS;
}