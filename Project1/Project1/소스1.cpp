#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int x = 0;
	int y = 0;
	int z = 0;

	for (int i = 1; 3 * i < 1000; i++) {
		x += 3 * i;
	}
	for (int i = 1; 5 * i < 1000; i++) {
		y += 5 * i;
	}
	for (int i = 1; 15 * i < 1000; i++) {
		z += 15 * i;
	}
	cout << x + y -z << endl;
	return 0;
}
