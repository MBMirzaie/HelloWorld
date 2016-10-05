#include <Windows.h>
#include <string>

#pragma once

class Test_Box {

private:
	int rCode;
	char* cCode;
public:
	Test_Box(int);
	void showCode();

};

inline Test_Box::Test_Box(int rCode) : cCode(new char[10]) {
	this->rCode = rCode;
}

inline void Test_Box::showCode(){
	MessageBox(NULL, (std::string("The result is ") + std::to_string(rCode)).c_str(), "Results of the last message box",
		MB_OK);
}