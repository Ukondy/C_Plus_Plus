#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class Msg {
public:
	Msg(string msg) {
		this->msg = msg;
	}

	virtual string getMsg() {
		return msg;
	}
private:
	string msg;
};

class BraketsMsg : public Msg {
public:
	BraketsMsg(string msg) :Msg(msg) {

	}
	string getMsg() override {
		return "[" + ::Msg::getMsg() + "]";
	}
};

class Printer {
public:
	void Print(Msg* msg) {
		cout << msg->getMsg() << endl;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	Msg msg("str");
	BraketsMsg bMsg("str");

	Printer p;

	p.Print(&msg);
	p.Print(&bMsg);

	return 1;
}
#endif 