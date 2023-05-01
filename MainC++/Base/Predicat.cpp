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

	vector<int> v = { 1,-2, -55, 9, 8, 2 };

	int result = count_if(v.begin(), v.end(), LessThanZero);

	cout << result << endl;

	cout << GreaterThanZero(1) << endl;

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

	int result2 = count_if(people.begin(), people.end(), people.front());

	cout << result2 << endl;

	return 1;
}
#endif 