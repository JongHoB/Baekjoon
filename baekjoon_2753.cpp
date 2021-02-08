#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	bool count;
	if (t % 4 == 0)
	{
		if (t % 400 == 0)
		{
			count = true;
		}
		else if (t % 100 != 0)
		{
			count = true;
		}
		else
		{
			count = false;
		}
	
	}
	else
	{
		count = false;
	}
	if (count == true)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
}