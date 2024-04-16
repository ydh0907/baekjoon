#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int flag = 0;

		string s;
		cin >> s;

		for (char c : s) {
			if (c == '(') ++flag;
			else --flag;
			if (flag < 0)
				break;
		}

		if (flag == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}