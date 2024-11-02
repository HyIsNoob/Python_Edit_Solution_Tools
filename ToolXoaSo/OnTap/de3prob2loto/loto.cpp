#include <iostream>
using namespace std;

int main()
{
	int Phieu[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> Phieu[i][j];

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				if (Phieu[i][j] == temp)
					Phieu[i][j] = -1;
	}

	bool flag = false;
	for (int i = 0; i < 3; i++)
		for (int j = 1; j < 2; j++)
		{
			if (Phieu[i][j - 1] == Phieu[i][j] && Phieu[i][j] == Phieu[i][j + 1])
				flag = true;
			else if (Phieu[j - 1][i] == Phieu[j][i] && Phieu[j][i] == Phieu[j + 1][i])
				flag = true;
			else if (Phieu[j - 1][j - 1] == Phieu[j][j] && Phieu[j][j] == Phieu[j + 1][j + 1])
				flag = true;
			else if (Phieu[j - 1][j + 1] == Phieu[j][j] && Phieu[j][j] == Phieu[j + 1][j - 1])
				flag = true;
		}

	if (flag)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}