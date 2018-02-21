#include <windows.h>
#define MYLIBAPI extern "C" __declspec(dllexport)
#include "MyLib.h"

int g_result;
int Add(int nLeft, int nRight) {
	g_result = nLeft + nRight;
	return(g_result);
}