#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace chrono;

struct jobPair {
	int start;
	int end;
};

void show(int arr[], int start, int end, string add = "") {
	for (int i = start; i <= end; i++) {
		cout << arr[i] << ", ";
	}
	cout << add << endl;
}

void quickSort(int* arr, int start, int end) {
	vector<jobPair> jobs;
	jobs.push_back({ start, end });
	jobPair job;
	while (jobs.size() > 0) {
		job = jobs.back();
		jobs.pop_back();

		start = job.start;
		end = job.end;

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

		if (start < top - 1)
			jobs.push_back({ start, top - 1 });
		if (top + 1 < end)
			jobs.push_back({ top + 1, end });
	}
}

int main()
{
	srand(time(NULL));
	int count;
	cin >> count;
	int* arr = new int[count];

	int i = 0;
	while (i < count) {
		cin >> arr[i++];
	}

	quickSort(arr, 0, count - 1);

	i = 0;
	while (i < count) {
		cout << arr[i++] << endl;
	}
}
