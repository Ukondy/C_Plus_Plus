#include <string>
#include <iostream>
#include <queue>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	priority_queue<int> q;
	priority_queue<int, vector<int>> q2;
	//priority_queue<int, list<int>> q3; error
	priority_queue<int, deque<int>> q4;

	q.push(56);
	q.push(4);
	q.push(7);
	q.push(99);

	cout << "elements count " << q.size() << endl;
	while (!q.empty()) {
		cout << q.top() << endl;
		q.pop();
		cout << "elements count " << q.size() << endl;
	}

	return 1;
}
#endif 