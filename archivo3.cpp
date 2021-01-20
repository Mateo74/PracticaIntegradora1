#include <iostream>

int main() {
	int f1 = 1, f2 = 1;
	std::cout << f1 << " " << f2 << " ";
	int contador = 2;
	while(contador < 10) {
		int f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		std::cout << f2 << " ";
		contador++;
	}
	std::cout << "\n";
	return 0;
}	
