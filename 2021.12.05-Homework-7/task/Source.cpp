#include <iostream>
#include "myLib.h"

using namespace std;

int main() 
{
	int n = 0;
	cin >> n;
	circle(n);
	cout << steps_to_one(n);
	return EXIT_SUCCESS;
}