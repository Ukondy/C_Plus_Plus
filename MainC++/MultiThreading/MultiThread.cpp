#include <string>
#include <iostream>
#include <thread>
#include <windows.h>

using namespace std;

#if 0
class MyClass {

public: 
	void DoWork() {
		this_thread::sleep_for(chrono::milliseconds(2000));

		cout << "ID потока = " << this_thread::get_id() << " ===========\tDoWork STARTED\t===========" << endl;

		this_thread::sleep_for(chrono::milliseconds(5000));

		cout << "ID потока = " << this_thread::get_id() << " ===========\tDoWork STOPPED\t===========" << endl;
	}

	void DoWork2(int a) {
		this_thread::sleep_for(chrono::milliseconds(2000));

		cout << "ID потока = " << this_thread::get_id() << " ===========\tDoWork2 STARTED\t===========" << endl;

		this_thread::sleep_for(chrono::milliseconds(5000));

		cout << "DoWork2 значение параметра\t" << a << endl;

		cout << "ID потока = " << this_thread::get_id() << " ===========\tDoWork2 STOPPED\t===========" << endl;

	}

	int Sum(int a, int b) {
		this_thread::sleep_for(chrono::milliseconds(2000));

		cout << "ID потока = " << this_thread::get_id() << " ===========\tSum STARTED\t===========" << endl;

		this_thread::sleep_for(chrono::milliseconds(5000));

		cout << "ID потока = " << this_thread::get_id() << " ===========\tSum STOPPED\t===========" << endl;
		return a + b;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	//int result;
	MyClass m;

	//thread t([&]() {result = m.Sum(2, 5);});
	//thread t2(&MyClass::DoWork, m);
	thread t3(&MyClass::DoWork2, m, 5);

	for (size_t i = 1; i < 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << " ===========\tmain works\t===========" << endl;
		this_thread::sleep_for(chrono::milliseconds(500));

	}
	//t.join();
	//t2.join();
	t3.join();

	//cout << "RESULT\t" << result << endl;

	return 1;
}
#endif 