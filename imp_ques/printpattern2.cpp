#include <iostream>
#include <string>

using namespace std;

void generateVariations(const string& input, string current, int index) {
    // If we've reached the end of the input string, print the current variation
    if (index == input.length()) {
        cout << current << std::endl;
        return;
    }

    // Keep the current character the same and recurse
    generateVariations(input, current + input[index], index + 1);

    // Replace the current character with '1' and recurse
    generateVariations(input, current + '1', index + 1);
}

void printVariations(const string& input) {
    generateVariations(input, "", 0);
}

int main() {
    string input = "ABC";
    printVariations(input);
    return 0;
}
