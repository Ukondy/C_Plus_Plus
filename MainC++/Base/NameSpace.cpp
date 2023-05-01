#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
namespace firstNS {
	void Foo() {
		cout << "Foo firstNS" << endl;
	}
	int a;

	class Point {

	};
}

namespace secondNS {
	void Foo() {
		cout << "Foo secondNS" << endl;
	}
	int b;

	class Point {

	};
}

namespace thirdNS {
	namespace secondNS {
		void Foo() {
			cout << "Foo secondNS in thirdNS" << endl;
		}
	}
	void Foo() {
		cout << "Foo thirdNS" << endl;
	}
}

using namespace secondNS;

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	firstNS::Foo();

	thirdNS::secondNS::Foo();

	thirdNS::Foo();

	Foo();

	return 1;

}
#endif 