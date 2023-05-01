#include <string>
#include <iostream>
#include <windows.h>

using namespace std;
#if 0
class MyFunctor
{
public:
	int operator()(int a, int b) {
		cout << "я функтор" << endl;
		return a + b;
	}
private:
};

class EvenFunctor {
public:

	void operator() (int value) {
		if (value % 2 == 0) {
			evenSum += value;
			evenCount++;
		}
	}

	void ShowEvenSum() {
		cout << "сумма чётных чисел = " << evenSum << endl;
	}
	void ShowEvenCount() {
		cout << "количество чётных чисел = " << evenCount << endl;
	}

private:
	int evenSum = 0;
	int evenCount = 0;
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	MyFunctor f;

	int result = f(5, 2);

	cout << result << endl;

	int arr[] = { 1,2,55,99,44,3, 6 };

	EvenFunctor ef;
	for (auto element : arr) {
		ef(element);
	}

	ef.ShowEvenCount();
	ef.ShowEvenSum();
	
	return 1;
}
#endif 