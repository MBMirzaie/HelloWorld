#include <iostream>
#include <Windows.h>

using namespace std;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	MessageBox(NULL, "Hello World!", "Just another Hello World program",
		MB_ICONEXCLAMATION | MB_OK);

	return 0;

}