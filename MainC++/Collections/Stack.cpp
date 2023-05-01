#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	stack<int, vector<int>> st;


	st.push(2);
	st.push(43);
	st.push(3);
	st.emplace(9);

	auto a = st._Get_container();

	cout << a[2] << endl;

	cout << st.size() << endl;
	cout << st.empty() << endl;

	st.pop();

	cout << "was deleted" << st.top() << endl;

	cout << st.size() << endl;


	while (!st.empty()) {
		cout << st.top() << endl;
		st.pop();
	}

	return 1;
}
#endif 