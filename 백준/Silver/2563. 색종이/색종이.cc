#include <iostream>
using namespace std;

int main() {
	bool arr[100][100]{ false };

	int count, answer = 0;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int w, h;
		cin >> w >> h;
		w--;
		h--;
		for (int i = w; i < w + 10; i++) {
			for (int j = h; j < h + 10; j++) {
				arr[i][j] = true;
			}
		}
	}

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (arr[i][j]) ++answer;

	cout << answer;

	return 0;
}