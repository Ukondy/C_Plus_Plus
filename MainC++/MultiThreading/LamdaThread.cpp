#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;

#if 0
int Sum(int a, int b) {
		this_thread::sleep_for(chrono::milliseconds(2000));
		
		cout << "ID потока = " << this_thread::get_id() << " ===========\tSum STARTED\t===========" << endl;
		
		this_thread::sleep_for(chrono::milliseconds(5000));

		cout << "ID потока = " << this_thread::get_id() << " ============\tSum STOPPED\t===========" << endl;
		return a + b;
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	int result;
	auto f = [&result]() {result = Sum(2, 5); };

	thread t(f);

	for (size_t i = 0; i <= 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain works\t" << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	t.join();
	cout << "Sum results " << result << endl;

	return 1;
}
#endif 