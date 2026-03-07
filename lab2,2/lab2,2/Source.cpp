#include <iostream>
#include <ctime>
int main() {
	int y1, m1, d1;
	int y2, m2, d2;

	std::cout << "enter first date (year -> month -> day) : "; std::cin >> y1 >> m1 >> d1;
	std::cout << "enter second date (year -> month -> day): "; std::cin >> y2 >> m2 >> d2;
	
	tm date1{};
	tm date2{};

	date1.tm_year = y1 - 1900;
	date1.tm_mon = m1 - 1;
	date1.tm_mday = d1;

	date2.tm_year = y2 - 1900;
	date2.tm_mon = m2 - 1;
	date2.tm_mday = d2;

	time_t t1 = mktime(&date1);
	time_t t2 = mktime(&date2);

	if (t1 < t2) {
		std::cout << "first date earlier then second" << std::endl;
	}
	else if (t1 > t2) {
		std::cout << "second date earlier then first" << std::endl;
	}
	else std::cout << "it`s exactly same date`s" << std::endl;

	double diff = difftime(t1, t2);
	double days = abs(diff) / 86400;

	std::cout << "diference in day`s: " << days << std::endl;
	
	return 0;
}
