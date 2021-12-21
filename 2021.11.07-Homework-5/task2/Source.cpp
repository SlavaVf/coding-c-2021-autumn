#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    double f = 0.0;
    cin >> f;
    long long value = *((long long*)&f);
    for (int i = 0; i < sizeof(int) * 8; ++i) {
        long long currentBit = (sizeof(long long) * 8 - i - 1);
        long long bitMask = (long long)1 << currentBit;
        long long bit = value & bitMask;
        bit = bit >> currentBit;
        cout << bit;
        if ((i + 1) % 4 == 0) {
            cout << " ";
        }
    }
    cout << endl;

    return EXIT_SUCCESS;
}