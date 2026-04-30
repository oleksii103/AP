#include <iostream>
#include <string>
#include <sstream>
#include <map>

int main() {
    int a;
    std::cout << "chs task: ";
    std::cin >> a;
    std::cin >> std::ws;

    switch (a) {
    case 1:{
            std::string text;
            std::cout << "enter text: " << std::endl;
            std::getline(std::cin, text);

            if (text.find("vesna") == std::string::npos) {
                std::cout << text;
            }
            else {
                size_t pos = 0;
                while ((pos = text.find("vesna", pos)) != std::string::npos) {
                    text.replace(pos, 5, "zima");
                    pos += 4;
                }
                std::cout << "text after replace: " << std::endl;
                std::cout << text;
            }
            break;
        }
    case 2: {
        std::string text, word;
        std::getline(std::cin, text);

        std::map<std::string, int> count;

        std::stringstream ss(text);

        while (ss >> word) {
            count[word]++;
        }

        std::cout << "words table:\n";

        for (const auto& p : count) {
            std::cout << p.first << " : " << p.second << "\n";
        }
        break;
    }
    default: std::cout << "nah you cnt do this" << std::endl; break;       
    }
    return 0;
}