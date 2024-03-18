#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int fivo[42]{ 1, 0, 1 };

	for (int i = 3; i < 42; i++) {
		fivo[i] = fivo[i - 1] + fivo[i - 2];
	}

	for (int i = 0; i < n; i++) {
		int current;
		cin >> current;
		printf("%d %d\n", fivo[current], fivo[current + 1]);
	}
}