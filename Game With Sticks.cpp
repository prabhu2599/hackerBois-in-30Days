#include <iostream>
using namespace std;

int main()
{
	int n, m, temp;
	cin >> n >> m;
	if (n > m)
	{
		temp = m;
	}
	else
	{
		temp = n;
	}
	if (temp % 2 == 0)
	{
		cout << "Malvika";
	}
	else
	{
		cout << "Akshat";
	}
}
