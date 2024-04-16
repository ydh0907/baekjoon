#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	int num;
	cin >> num;

	string out;
	stack<int> s;
	int next = 1;

	for (int i = 0; i < num; i++) {
		int input;
		cin >> input;

		while (s.empty() || s.top() < input) {
			s.push(next++);
			out += "+\n";
		}

		if (input < s.top()) {
			cout << "NO";
			return 0;
		}

		s.pop();
		out += "-\n";
	}

	cout << out;
}