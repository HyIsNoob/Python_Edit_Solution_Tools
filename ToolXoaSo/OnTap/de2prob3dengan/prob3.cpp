#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	long long S = 0;
	long long* a = new long long[N];
	const long long mod = 1000000007;
	for (int i = 0; i < N; i++)
		cin >> a[i];
	for (int i = 0; i < N; i++)
		for (int j = i + 1; j < N; j++)
			S = (S + (a[i] % mod) * (a[j] % mod)) % mod;
	cout << S;
}