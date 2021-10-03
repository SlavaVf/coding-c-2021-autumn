#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    int s1 = 0;
    int d1 = 0;
    int s2 = 0;
    int d2 = 0;
    cin >> s1 >> d1 >> s2 >> d2;
    if ((pow(s2 - s1, 2) == pow(d2 - d1, 2)) || (d2 == d1 || s2 == s1)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return EXIT_SUCCESS;
}