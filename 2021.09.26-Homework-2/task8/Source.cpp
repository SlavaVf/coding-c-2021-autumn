#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;
    int temp1 = 0;
    int temp2 = 0;
    temp1 = max(c, b);
    temp2 = min(c, b);
    c = temp1;
    b = temp2;
    temp1 = max(c, a);
    temp2 = min(c, a);
    c = temp1;
    a = temp2;
    if (c < a + b) {
        if (c * c == a * a + b * b) {
            cout << "right";
        }
        else if (c * c < a * a + b * b) {
            cout << "acute";
        }
        else {
            cout << "obtuse";
        }
    }
    else {
        cout << "impossible";
    }
    return EXIT_SUCCESS;
}