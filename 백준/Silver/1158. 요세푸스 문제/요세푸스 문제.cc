#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node
{
public:
	Node* next;
	int data;
};

class LinkedQueue {
private:
	Node* front = NULL;
	Node* rear = NULL;
public:
	void Enqueue(int data) {
		Node* temp = new Node{ NULL, data };

		if (IsEmpty()) {
			front = temp;
			rear = temp;
			return;
		}

		rear->next = temp;
		rear = temp;
	}

	int Dequeue() {
		if (IsEmpty())
			return -1;

		Node* del = front;
		int data = front->data;
		front = front->next;
		delete del;
		return data;
	}

	bool IsEmpty() {
		return front == NULL;
	}
};

int main() {
	int all, space;
	cin >> all >> space;

	string answer;
	LinkedQueue queue;

	for (int i = 1; i <= all; i++)
		queue.Enqueue(i);

	answer += '<';
	for (int i = 1; i < space; i++) {
		queue.Enqueue(queue.Dequeue());
	}
	answer += to_string(queue.Dequeue());

	for (int i = 1; i < all; i++) {
		answer += ", ";
		for (int i = 1; i < space; i++) {
			queue.Enqueue(queue.Dequeue());
		}
		answer += to_string(queue.Dequeue());
	}

	answer += '>';
	cout << answer;
}