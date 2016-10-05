#include <iostream>
#include <Windows.h>
#include "Test_Box.h"

using namespace std;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	int testValue;
	testValue = MessageBox(NULL, "Hello World!", "Just another Hello World program",
		MB_ICONEXCLAMATION | MB_OK);
	Test_Box myTest = Test_Box(testValue);
	myTest.showCode();
	return 0;

}