#include <iostream>
#include "UpDownCounter.h"

int main() {
	UpDownCounter c1;
	UpDownCounter c2(10, 20, 1, 2);
	for (int i = 0; i < 260; i++) {
		c1++;
		++c2;
	}
	for (int i = 0; i < 22; i++) {
		c2--;
	}
	std::cout << "c1 is:" << c1.getValue() << "  c2 is:" << c2.getValue() << std::endl;
	return 0;
}