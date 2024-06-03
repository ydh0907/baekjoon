#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int testCount;
	cin >> testCount;

	for (int i = 0; i < testCount; i++) {
		int count = 0, arrSize, findSize;
		cin >> arrSize >> findSize;

		vector<int> a(arrSize);
		vector<int> b(findSize);
		for (int i = 0; i < arrSize; i++)
			cin >> a[i];
		for (int i = 0; i < findSize; i++)
			cin >> b[i];

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		for (int i = 0; i < findSize; i++) {
			int up = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
			count += arrSize - up;
		}

		cout << count << '\n';
	}
}