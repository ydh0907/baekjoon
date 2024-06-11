#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int count;
	cin >> count;

	unordered_set<int> set;

	for (int i = 0; i < count; i++) {
		int input;
		cin >> input;
		set.insert(input);
	}

	cin >> count;
	for (int i = 0; i < count; i++) {
		int input;
		cin >> input;
		if (set.find(input) != set.end())
			cout << "1 ";
		else
			cout << "0 ";
	}
}