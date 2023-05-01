#include <windows.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#if 0
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

	vector<int> v = { 6,4,4,12,2 };

	auto result = find(v.begin(), v.end(), 12);

	if (result == v.end()) {
		cout << "-" << endl;
	}
	else {
		cout << "+" << endl;
	}

	auto result2 = find_if(v.begin(), v.end(), [](int a) {return a > 0; });

	if (result2 == v.end()) {
		cout << "-" << endl;
	}
	else {
		cout << "+" << endl;
	}

	auto result3 = find_if_not(v.begin(), v.end(), [](int a) {return a > 0; });

	if (result3 == v.end()) {
		cout << "-" << endl;
	}
	else {
		cout << "+" << endl;
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
	auto pResult = find_if(people.begin(), people.end(), [](const Person& p)
		{
			return p.name == "Иван";
		}
	);

	if (pResult == people.end()) {
		cout << "-" << endl;
	}
	else {
		cout << "+" << endl;
	}
	return 1;
}
#endif 