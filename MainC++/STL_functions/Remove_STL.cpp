#include <string>
#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

#if 0
class Person {
public:
	Person(string name, double score, int age) {
		this->name = name;
		this->score = score;
		this->age = age;
	}

	bool operator()(const Person& p) {
		return p.score > 180;
	}
	
	string name;
	double score;
	int age;
	
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	vector<int> v = { 5,9,1,46,4,9,4 };

	auto result = remove(v.begin(), v.end(), 9);

	v.erase(result, v.end());

	for (auto el : v) {
		cout << el << endl;
	}

	cout << endl << endl;

	vector<Person> people
	{
		Person("Вася", 181, 17),
		Person("Петя", 30, 22),
		Person("Маша", 179, 19),
		Person("Даша", 200, 25),
		Person("Катя", 198, 24),
		Person("Андрей", 181, 23),
		Person("Сергей", 50, 30),
		Person("Денис", 180, 40),
		Person("Иван", 150, 32),
		Person("Иван", 199, 31),
		Person("Петя", 10, 53)
	};

	people.erase(remove_if(people.begin(), people.end(),
		[](const Person& p) {return p.score < 150 || p.age > 25; }),
		people.end()
	);

	cout << "Всего элементов:\t" << people.size() << endl;

	for (auto el : people) {
		cout << "Имя:\t" << el.name << "\tбаллы\t" << el.score << "\tвозраст\t" << el.age << endl;
	}

	string str = "Текст с несколькими  пробелами";
	cout << str << endl;

	str.erase(remove(str.begin(), str.end(), ' '), str.end());

	cout << str << endl;

	return 1;
}
#endif 