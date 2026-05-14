#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream fout("friends.txt");
    
    // b-days random
    fout << "Maksymenko 15 6 2005\n";
    fout << "Lavrenchuk 21 12 2004\n";
    fout << "Panas 3 7 2005\n";
    fout << "Krupa 11 1 2006\n";
    fout << "Naum 29 8 2005\n";

    fout.close();

    std::ifstream fin("friends.txt");
    std::ofstream summer("summer.txt");

    std::string surname;
    int day, month, year;

    std::cout << "birth in summer:\n";

    while (fin >> surname >> day >> month >> year) {

        if (month >= 6 && month <= 8) {

            std::cout << surname << " " << day << "." << month << "." << year << "\n";

            summer << surname << " " << day << "." << month << "." << year << "\n";
        }
    }

    fin.close();
    summer.close();

    return 0;
}