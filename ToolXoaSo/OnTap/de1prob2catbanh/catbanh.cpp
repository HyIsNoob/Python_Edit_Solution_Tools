#include <iostream>

using namespace std;

int max_cake_angle(int N, int angles[]) {
	for (int i = 0; i < N - 1; ++i) {
		for (int j = i + 1; j < N; ++j) {
			if (angles[i] < angles[j]) {
				int temp = angles[i];
				angles[i] = angles[j];
				angles[j] = temp;
			}
		}
	}

	int max_angle = 0;
	int current_angle = 0;
	for (int i = 0; i < N; ++i) {
		current_angle = (current_angle + angles[i]) % 360;
		max_angle = max(max_angle, min(current_angle, 360 - current_angle));
	}
	return max_angle;
}

int main() {
	int N;
	cin >> N;
	int* angles = new int[N];
	for (int i = 0; i < N; ++i) {
		cin >> angles[i];
	}
	int result = max_cake_angle(N, angles);
	cout << result << endl;
	return 0;
}
