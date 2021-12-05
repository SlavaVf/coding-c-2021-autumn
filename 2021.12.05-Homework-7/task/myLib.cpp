#include "myLib.h"
#include <iostream>

using namespace std;

int steps_to_one(int n)
{
	int counter = 0;
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = 3 * n + 1;
		}
		counter += 1;
	}
	return counter;
}

void circle(int r)
{
	int Oy = r;
	int Ox = r;
	for (int y = -Oy; y <= Oy; y += 2) 
	{
		for (int x = -Ox; x <= Ox; x++) 
		{

			if ((int)sqrt(x * x + y * y) == r)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

/*


           
              **
			 *  *
		    *    *
			*    *
			 *  *
			  **




			
*/