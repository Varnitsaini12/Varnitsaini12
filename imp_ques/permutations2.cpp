#include <bits/stdc++.h>

using namespace std; 


void Permutations(string& str, int left, int right, unordered_set<string>& uniquePerms) {
    if (left == right) {
        uniquePerms.insert(str);
        return;
    }

    for (int i = left; i <= right; ++i) {
        swap(str[left], str[i]);
        Permutations(str, left + 1, right, uniquePerms);
        swap(str[left], str[i]); // Backtrack
    }
}

void printUniquePermutations(string& str) {
    unordered_set<string> uniquePerms;
    Permutations(str, 0, str.length() - 1, uniquePerms);

    for (const string& perm : uniquePerms) {
        cout << perm << endl;
    }
}

int main() {
    string input = "122";
    printUniquePermutations(input);
    return 0;
}
