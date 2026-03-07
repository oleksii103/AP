#include <iostream>

double perimetr(double a, double b) {
		return 2 * (a + b);
	}
int main() {
	double a, b;
	
	std::cout << "enter side a: "; std::cin >> a;
	std::cout << "enter side b: "; std::cin >> b;

	std::cout << "perimetr = " << perimetr(a, b) << std::endl;

	return 0;
}