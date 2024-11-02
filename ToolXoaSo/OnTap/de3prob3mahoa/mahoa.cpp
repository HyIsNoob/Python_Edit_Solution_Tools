#include <iostream>

using namespace std;

bool ktSoDacBiet(long long);
const long long MAX = 1000000000;

int main()
{
	long long L, R, Khoang[1000], k = 0, dem = 0;
	cin >> L >> R;
	long long temp = L;
	for (long long x = L; x < R; x++) {
		for (long long y = x + 1; y <= R; y++) {
			if (ktSoDacBiet(x) && ktSoDacBiet(y) && ktSoDacBiet(x * y)) {
				dem++;
			}
		}
	}

	cout << dem;
	return 0;
}

bool ktSoDacBiet(long long n)
{
	for (long long i = 2; i < n; i++)
		if (n % (i * i) == 0)
			return false;
	return true;
}