#include <windows.h>

void foo(void) {  
	const char *Foo = "Hello World!"; // Alterado para const char * para corrigir o erro  

	OutputDebugStringA("Hello World!");  
	OutputDebugStringA("This is the first thing we have actually printed.\n");  
}

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
) {
	foo();
	return 0;
}