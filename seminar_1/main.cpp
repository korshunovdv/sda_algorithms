#include <iostream>
#include <vector>
#include <cassert>
#include <random>
#include <algorithm>
#include <cstdio>
#include <exception>


int main() {
	int x = 1;
	for (int i = 0; i < 100; ++i) {
		x += x * 2;
		std::cout << "index " << i << " = " << x << "\n";
	}
	return 0;

};
