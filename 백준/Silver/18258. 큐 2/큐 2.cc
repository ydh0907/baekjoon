#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int number;
	cin >> number;

	for (int i = 0; i < number; i++) {
		string oper;
		cin >> oper;

		if (oper == "push") {
			int input;
			cin >> input;
			q.push(input);
		}
		else if (oper == "pop") {
			if (q.empty())
				cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (oper == "size") {
			cout << q.size() << '\n';
		}
		else if (oper == "empty") {
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (oper == "front") {
			if (q.empty())
				cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
			}
		}
		else if (oper == "back") {
			if (q.empty())
				cout << -1 << '\n';
			else {
				cout << q.back() << '\n';
			}
		}
	}
}