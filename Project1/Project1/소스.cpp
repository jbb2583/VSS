#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x;
	string::iterator it;
	int y = 0;
	cout << "숫자열을 입력하세요." << "\n";
	cin >> x;

	for (it = x.begin(); it != x.end(); it++) {
		y += (int)(*it) - 48;
	}
	cout << y;
	return 0;
}
