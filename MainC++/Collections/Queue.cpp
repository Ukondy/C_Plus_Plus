#include <string>
#include <iostream>
#include <queue>
#include <list>
#include <windows.h>

using namespace std;

#if 0
int main() {
	queue<int> q;

	queue<int, list<int>> q2;
	//queue<int, vector<int>> q3; // error
	queue<int, deque<int>> q4;

	q.push(56);
	q.push(4);
	q.push(7);
	q.push(99);

	cout << q.back() << endl;
	cout << endl << endl;

	cout << "old front element" << endl;
	cout << q.front() << endl;

	q.pop();

	cout << "new front element" << endl;
	cout << q.front() << endl;
	cout << endl << endl;

	cout << "elements count " << q.size() << endl;
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
		cout << "elements count " << q.size() << endl;
	}

	auto a = q._Get_container();
	return 1;
}
#endif 