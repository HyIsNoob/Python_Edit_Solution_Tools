#include <iostream>
using namespace std;

const int MAX = 10;

int main()
{
	bool check;
	int dem = 0;

	char* a = new char[MAX];
	char* b = new char[MAX];
	cin.getline(a, MAX);
	cin.getline(b, MAX);

	if (a[0] == '#')
		dem++;
	if (a[1] == '#')
		dem++;
	if (b[1] == '#')
		dem++;
	if (b[0] == '#')
		dem++;

	if (dem >= 3)
		cout << "Yes";
	else
	{
		if (a[0] == '#' && b[1] == '#')
			cout << "No";
		else if (a[1] == '#' && b[0] == '#')
			cout << "No";
		else
			cout << "Yes";
	}

	delete[] a;
	delete[] b;

	return 0;
}