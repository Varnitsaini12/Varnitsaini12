#include<iostream>

using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for (int i = 0; i < 26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('/');
    }
    
    void insertUtil(TrieNode* root, string word){
        // base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }
        // assumption word will be in caps
        int index = word[0] - 'A';
        TrieNode* child;

        // present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        // absent
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        //Recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word){
        // base case 
        if(word.length() == 0){
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode *child;

        //present
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }
        //Recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }

    void removeWord(string word){
        bool ans = searchWord(word);
        if(ans){
            removeUtil(root, word);
            return;
        }
    }

    void removeUtil(TrieNode* root, string word){
        if(word.length() == 0){
            root->isTerminal = false;
            return;
        }
        int index = word[0] - 'A';
        TrieNode *child;
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        else{
            root->children[index]->isTerminal = false;
        }
        removeUtil(child, word.substr(1));
    }


};

int main() {
    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    cout << "ARM Present or not: " << t->searchWord("ARM") << endl;
    cout << "DO Present or not: " << t->searchWord("DO") << endl;
    cout << "TIMA Present or not: " << t->searchWord("TIMA") << endl;
    t->removeWord("ARM");
    cout << "ARM Present or not: " << t->searchWord("ARM") << endl;
    return 0;
}