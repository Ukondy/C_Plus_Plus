#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class Weapon {
public:
	virtual void Shoot() = 0;
	void Foo() {
		cout << "Foo" << endl;
	}
};

class Gun : public Weapon {
public:
	void Shoot() override {
		cout << "BANG!" << endl;
	}
};

class Knife : public Weapon {
	void Shoot() override {
		cout << "SHINK SHINK SHINK!!!!" << endl;
	}
};

class SubmashineGun : public Weapon {
public:
	void Shoot() override {
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazooka : public Weapon {
public:
	void Shoot() override {
		cout << "BADABUM" << endl;
	}
};

class Player {
public: 
	void Shoot(Weapon *weapon) {
		weapon->Shoot();
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	return 1;
}
#endif 