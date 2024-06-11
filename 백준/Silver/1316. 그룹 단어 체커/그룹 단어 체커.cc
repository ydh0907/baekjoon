#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count, result;
	cin >> count;
	result = count;
	for (int i = 0; i < count; i++) {
		unordered_map<char, bool> map;
		string input;
		cin >> input;
		char lastchar = ' ';
		for (char c : input) {
			if (c == lastchar) continue;
			lastchar = c;
			if (map[c]) {
				result--;
				break;
			}
			map[c] = true;
		}
	}
	cout << result;
}