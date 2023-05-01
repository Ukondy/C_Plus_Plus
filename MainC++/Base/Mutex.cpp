#include <string>
#include <iostream>
#include <mutex>
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

mutex mtx;

void Print(char ch) {
	this_thread::sleep_for(chrono::milliseconds(2000));

	mtx.lock();
	for (int i = 0; i < 5; ++i)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(20));
		}
		cout << endl;
	}
	cout << endl;

	mtx.unlock();

	this_thread::sleep_for(chrono::milliseconds(2000));
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");


	SimpleTimer st;

	thread t1(Print, '*');
	thread t2(Print, '#');

	t1.join();
	t2.join();

	return 1;
}
#endif 