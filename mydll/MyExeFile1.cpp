#include <iostream>
#include "MyLib.h"

int main(){
	int a, b;
	std::cout << "a, b = " << std::endl;
	std::cin >> a >> b;
	int c = Add(a, b);
	std::cout << "a + b = " << c << std::endl;
	std::cout << "global g_result value is" 
			  << (c == g_result ? "the same " : "not the same ") 
			  << "as sum" << std::endl;
	
	return system("pause");
}