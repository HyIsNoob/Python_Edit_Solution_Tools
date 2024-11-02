#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int Hang[100][100];
	cin >> a >> b;

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			cin >> Hang[i][j];

	int lc = Hang[0][0];

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			if (lc > Hang[i][j])
				lc = Hang[i][j];

	int SoHangCanChuyen = 0;

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			if (lc < Hang[i][j])
				SoHangCanChuyen += Hang[i][j] - lc;
	cout << SoHangCanChuyen;
	return 0;
}