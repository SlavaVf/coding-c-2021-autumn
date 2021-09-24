#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n = 0;
    int m = 0;
    int temp = 0;
    cin >> n >> m;
    temp = n;
    n = m;
    m = temp;
    cout << n << " " << m;
    return EXIT_SUCCESS;
}