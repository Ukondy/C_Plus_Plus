#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

#if 0
bool GreaterThanZero(int a) {
	return a > 0;
}

bool LessThanZero(int a) {
	return a < 0;
}

bool MyPred(int a, int b) {
	return a > b;
}

class Person {
public:
	Person(string name, double score) {
		this->name = name;
		this->score = score;
	}

	bool operator()(const Person& p) {
		return p.score > 180;
	}

	string name;
	double score;

};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	vector<int> v = { 9,4,94,6,1,3,7 };
	sort(v.begin(), v.end(), [](int a, int b) {return a > b; });

	for (auto element : v) {
		cout << element << endl;
	}
	cout << endl << endl;
	const int SIZE = 7;
	int arr[SIZE] = { 9,4,94,6,1,3,7 };

	sort(arr, &arr[SIZE], [](int a, int b) {return a > b; });

	for (auto element : arr) {
		cout << element << endl;
	}

	vector<Person> people
	{
		Person("Вася", 181),
		Person("Петя", 30),
		Person("Петя", 10),
		Person("Маша", 179),
		Person("Даша", 200),
		Person("Катя", 198),
		Person("Андрей", 181),
		Person("Сергей", 50),
		Person("Иван", 150),
		Person("Иван", 199),
	};

	sort(people.begin(), people.end(), [](const Person& p1, const Person& p2)
		{
			return p1.score > p2.score;
		}
	);

	for (auto element : people) {
		cout << "Имя:\t" << element.name << "\tбалл:\t" << element.score << endl;
	}
	
	return 1;
}
#endif 