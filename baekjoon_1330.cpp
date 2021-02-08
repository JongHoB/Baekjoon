#include <iostream>


using namespace std;

int main() {

	int a;
	int b;
	cin >> a >> b;
	if (a > b)
	{
		cout << ">" << endl;

	}
	else if (b > a)
	{
		cout << "<" << endl;
	}
	else
	{
		cout << "==" << endl;
	}
}