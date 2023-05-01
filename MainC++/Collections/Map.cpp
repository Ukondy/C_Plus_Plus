#include <string>
#include <iostream>
#include <map>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	map<int, string> myMap;

	myMap.insert(make_pair(4, "ноутбук"));

	myMap.insert(pair<int, string>(5, "телефон"));

	myMap.emplace(3, "монитор");

	myMap.emplace(22, "клавиатура");

	auto res = myMap.emplace(22, "sdgdfdf");

	cout << myMap[3] << endl;

	auto it = myMap.find(22);

	if (it != myMap.end()) {
		cout << it->second << endl;
		cout << it->first << endl;
	}
	else {
		cout << "элемент не найден" << endl;
	}

	map<string, int> myMap2;

	myMap2.emplace("Петя", 1313);
	myMap2.emplace("Маша", 222);
	myMap2.emplace("Миша", 4441);

	myMap2["Петя"] = 99;
	myMap2["Вася"] = 9797;

	myMap2["Вася"] = 44;

	myMap2.at("Петя") = 33;

	cout << myMap2["Петя"] << endl;
	cout << myMap2.at("Петя") << endl;

	try {
		myMap2.at("Илья") = 3;
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "ключ отсутсвует в контейнере map" << endl;
	};

	myMap2.erase("Петя");

	return 1;
}
#endif 