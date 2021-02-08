#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;
	int temp;
	int b;
	int b1, b2, b3;
	cin >> a >> temp;
	b = temp;
	b1 = b % 10;
	b /= 10;
	b2 = b % 10;
	b /= 10;
	b3 = b % 10;
	cout << a * b1 <<"\n"<< a * b2 <<"\n"<< a * b3 <<"\n"<< a * temp<<endl;

}