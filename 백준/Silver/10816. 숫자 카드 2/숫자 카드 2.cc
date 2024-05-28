#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arrSize;
	cin >> arrSize;
	int* arr = new int[arrSize];
	for (int i = 0; i < arrSize; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + arrSize);

	int findSize;
	cin >> findSize;
	for (int i = 0; i < findSize; i++) {
		int target;
		cin >> target;
		int lower = lower_bound(arr, arr + arrSize, target) - arr;
		int upper = upper_bound(arr, arr + arrSize, target) - arr;
		cout << upper - lower << '\n';
	}
}