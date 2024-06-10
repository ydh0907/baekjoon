#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int wood, target;
	int min = 0, max = 0;
	cin >> wood >> target;
	vector<int> woods(wood);
	for (int i = 0; i < wood; i++) {
		int input;
		cin >> input;
		if (input > max)
			max = input;
		woods[i] = input;
	}

	sort(woods.begin(), woods.end());

	int cut = 0;
	while (min <= max) {
		cut = (min + max) / 2;
		int index = upper_bound(woods.begin(), woods.end(), cut) - woods.begin();
		long long length = 0;
		for (int i = index; i < wood; i++) {
			length += woods[i] - cut;
		}
		if (length >= target) {
			min = cut + 1;
		}
		else {
			max = cut - 1;
		}
	}
	cout << max;
}