#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;

#if 0
class SimpleTimer {
public:
	SimpleTimer() {
		start = chrono::high_resolution_clock::now();
	}
	
	~SimpleTimer() {
		end = chrono::high_resolution_clock::now();
		std::chrono::duration<float> duration = end - start;
		cout << "Duration " << duration.count() << " seconds" << endl;
	}

private:
	std::chrono::time_point<std::chrono::steady_clock> start, end;
};

int Sum(int a, int b) {
	SimpleTimer st;

	this_thread::sleep_for(chrono::milliseconds(2000));
			
	cout << "ID потока = " << this_thread::get_id() << " ===========\tSum STARTED\t===========" << endl;
			
	this_thread::sleep_for(chrono::milliseconds(5000));
	
	cout << "ID потока = " << this_thread::get_id() << " ============\tSum STOPPED\t===========" << endl;
	return a + b;
}

void Foo() {
	SimpleTimer st;
	for (size_t i = 0; i < 500; i++)
	{
		cout << i << endl;
	}
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	SimpleTimer st;

	int result;
	thread t([&result]() {result = Sum(2, 5); });

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