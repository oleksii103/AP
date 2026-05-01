#include <iostream>
#include <cstring>
#include <map>
#include <sstream>

int main() {
    int a;
    std::cout << "chs task: ";
    std::cin >> a;
    std::cin.ignore(); // очистка буфера

    switch (a) {

    case 1: {
        char text[1000];
        std::cout << "enter text:\n";
        std::cin.getline(text, 1000);

        if (strstr(text, "vesna") == nullptr) {
            std::cout << text;
        }
        else {
            char result[1000] = "";
            char* pos = text;

            while (true) {
                char* found = strstr(pos, "vesna");

                if (found == nullptr) {
                    strcat(result, pos);
                    break;
                }

                strncat(result, pos, found - pos);

                strcat(result, "zima");

                pos = found + 5; 
            }

            std::cout << "text after replace:\n";
            std::cout << result;
        }
        break;
    }

    case 2: {
        char text[1000];
        std::cout << "enter text:\n";
        std::cin.getline(text, 1000);

        std::map<std::string, int> count;

        char* word = strtok(text, " ");

        while (word != nullptr) {
            count[word]++;
            word = strtok(nullptr, " ");
        }

        std::cout << "words table:\n";

        for (const auto& p : count) {
            std::cout << p.first << " : " << p.second << "\n";
        }
        break;
    }

    default:
        std::cout << "nah you cnt do this\n";
        break;
    }

    return 0;
}