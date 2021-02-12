#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int first = a * b * c * c + a * b * b * c + a * b * c * c;
	cout << first << endl;
	int second = 3 * a * a - 2 * b * b * b + 4 * c * c;
	cout << second << endl;
	int third = 5 * a * b + a * a * b * b * c * c - 6;
	cout << third << endl;
	cout << first * first - 4 * second * second + third * third;
	return 0;
}