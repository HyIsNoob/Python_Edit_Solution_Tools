#include <iostream>
using namespace std;

int demUoc(int);

int main() {
	int n;
	int kq = 0;
	int mid = 0;

	cin >> n;

	for (int i = 1; i < (n >> 1); i++)
		kq = demUoc(n - i) * demUoc(i) + kq;
	if (n % 2 == 0)
		mid = demUoc(n >> 1) * demUoc(n >> 1);
	else
		mid = demUoc(n >> 1) * demUoc((n / 2) + 1) << 1;

	kq = (kq << 1) + mid;

	cout << kq << endl;

	return 0;
}

int demUoc(int n) {
	if (n == 1)
		return 1;
	int dem = 2;
	for (int i = 2; i * i < n; i++)
		if (n % i == 0) {
			dem++;
			if (i != n / i)
				dem++;
		}

	return dem;
}