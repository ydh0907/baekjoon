#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct jobPair {
	int start;
	int end;
};

void quickSort(int* arr, int start, int end) {
	vector<jobPair> jobs;
	jobs.reserve(end + 1);
	jobs.push_back({ start, end });
	while (jobs.size() > 0) {
		start = jobs.back().start;
		end = jobs.back().end;
		swap(arr[start], arr[(start + end) / 2]);
		int top = start + 1;
		for (int i = start + 1; i <= end; i++) {
			if (arr[i] < arr[start]) {
				swap(arr[i], arr[top]);
				++top;
			}
		}
		--top;
		swap(arr[start], arr[top]);
		jobs.pop_back();
		if (start < top - 1)
			jobs.push_back({ start, top - 1 });
		if (top + 1 < end)
			jobs.push_back({ top + 1, end });
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int count;
	cin >> count;
	int* arr = new int[count];
	int i = 0;
	while (i < count) {
		cin >> arr[i++];
	}

	sort(arr, arr + count);

	i = 0;
	while (i < count) {
		cout << arr[i++] << '\n';
	}
}
