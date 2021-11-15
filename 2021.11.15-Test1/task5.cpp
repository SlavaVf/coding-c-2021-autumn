#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int data[100001]{ 0 };
    for (int i = 0; i < n; i++) {
        int a = 0;
        scanf_s("%d", &a);
        data[a] = 1;
    }
    for (int i = 0; i < m; i++) {
        int a = 0;
        scanf_s("%d", &a);
        if (data[a] == 1) {
            data[a] = 2;
        }
    }
    for (int i = 0; i < 100001; i++) {
        if (data[i] == 2) {
            printf("%d ", i);
        }
    }
    return EXIT_SUCCESS;
}