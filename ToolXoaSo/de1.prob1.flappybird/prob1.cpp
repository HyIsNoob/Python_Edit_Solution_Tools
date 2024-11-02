#include <iostream>

using namespace std;

const long long MAX = 1000000;

int main() {
	long long N;
	cin >> N;

	long long* a = new long long[N];
	long long* b = new long long[N];

	for (long long i = 0; i < N; i++)
		cin >> a[i];
	for (long long i = 0; i < N; i++)
		cin >> b[i];

	long long startPos = a[0];
	long long endPos = b[0];

	for (long long i = 1; i < N; i++) {
		startPos = max(startPos, a[i]);
		endPos = min(endPos, b[i]);
	}
	long long finalDem = endPos - startPos + 1;
	if (finalDem > 0)
		cout << finalDem << endl;
	else
		cout << 0;

	delete[] a;
	delete[] b;

	return 0;
}
