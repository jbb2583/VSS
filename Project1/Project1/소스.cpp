#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x;
	string::iterator it;
	int y = 0;
	cout << "���ڿ��� �Է��ϼ���." << "\n";
	cin >> x;

	for (it = x.begin(); it != x.end(); it++) {
		y += (int)(*it) - 48;
	}
	cout << y;
	return 0;
}
