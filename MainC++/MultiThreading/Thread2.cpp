#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;

#if 0
void DoWork(int a, int b) {
	this_thread::sleep_for(chrono::milliseconds(3000));
	
	cout << "===========\t" << "DoWork STARTED\t===========" << endl;
	
	this_thread::sleep_for(chrono::milliseconds(5000));
	
	cout << "a + b = " << a + b << endl;
	
	this_thread::sleep_for(chrono::milliseconds(3000));

	cout << "===========\t" << "DoWork STOPPED\t===========" << endl;
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	thread th(DoWork, 2, 3);

	for (size_t i = 0; true; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain works\t " << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	th.join();

	return 1;
}
#endif 