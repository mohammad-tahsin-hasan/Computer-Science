#include <cctype>
#include <iostream>
using namespace std;

class TextAnalyzer {
   public:
    char s[1000];
    int vowels, consonants, spaces;

    // Constructor: takes input and analyzes the text
    TextAnalyzer() {
        vowels = consonants = spaces = 0;

        cout << "Enter the string: " << endl;
        cin.getline(s, sizeof(s));

        for (int i = 0; s[i]; i++) {
            char c = tolower(s[i]);

            if (c == ' ') {
                spaces++;
            } else if (c >= 'a' && c <= 'z') {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
    }

    // Method to display results
    void displayResults() {
        cout << "Vowels: " << vowels << endl;
        cout << "Consonants: " << consonants << endl;
        cout << "Spaces: " << spaces << endl;
    }
};

int main() {
    TextAnalyzer obj;
    obj.displayResults();

    return 0;
}
