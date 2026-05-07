#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string text, word;

    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::stringstream ss(text);

    while (ss >> word) {

        if (word.length() > 1) {
            char first = word[0];

            for (int i = 0; i < word.length() - 1; i++) {
                word[i] = word[i + 1];
            }

            word[word.length() - 1] = first;
        }

        std::cout << word << " ";
    }

    return 0;
}