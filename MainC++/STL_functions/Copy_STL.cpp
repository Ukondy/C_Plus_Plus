#include <string>
#include <iostream>
#include <algorithm>
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

	vector<Person> result;
	vector<Person> result2;

	copy(people.begin(), people.end(), back_inserter(result));

	copy_if(people.begin(), people.end(), back_inserter(result2), [](const Person& p)
		{
			return p.age > 25;
		}
	);

	sort(result2.begin(), result2.end(), [](const Person& p1, const Person& p2)
		{
			return p1.name > p2.name;
		}
	);

	cout << "Всего элементов:\t" << result2.size() << endl;

	for (auto el : result2) {
		cout << "Имя:\t" << el.name << "\tбаллы\t" << el.score << endl;
	}
	return 1;

}
#endif 