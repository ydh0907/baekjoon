#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int all, space, pointer = -1;
	cin >> all >> space;

	string answer;
	vector<int> arr;
	arr.resize(all);

	for (int i = 0; i < all; i++)
		arr[i] = i + 1;

	pointer = (pointer + space) % arr.size();
	answer += '<';
	answer += to_string(arr[pointer]);
	arr.erase(arr.begin() + pointer--);

	while (arr.size() > 0) {
		answer += ", ";
		pointer = (pointer + space) % arr.size();
		answer += to_string(arr[pointer]);
		arr.erase(arr.begin() + pointer--);
	}

	answer += '>';
	cout << answer;
}