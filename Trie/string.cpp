#include<iostream>
#include<vector>
using namespace std;

void vec(vector<int>&v){
    for (int i = 0; i < v.size(); i++){
        if(v[i] == 3){
            v[i] = 5;
        }
    }
}

bool check_vowel(char s){
    if(s == 'a'|| s == 'e' || s == 'i' || s == 'o' || s == 'u'){
        return true;
    }
    return false;
}
void convert_vowels(string& s){
    int n = s.size();
    for (int i = 0; i < n; i++){
        if(check_vowel(s[i])){
            s[i] = '$';
        }
    }
}
void convert_consonants(string& s){
    int n = s.size();
    for (int i = 0; i < n; i++){
        s[i] = tolower(s[i]);
    }
        for (int i = 0; i < n; i++)
        {
            if (check_vowel(s[i]))
            {
                s[i] = '#';
            }
        }
}
void convert_lower(string& s){
    int n = s.size();
    for (int i = 0; i < n; i++){
        s[i] = toupper(s[i]);
    }
}


int main()
{
    string s1 = "iamdead";
    string s2 = "Thereyougo";
    string s3 = "IAMgOING";
    vector<int> v = {1, 3, 54, 5};
    convert_vowels(s1);
    convert_consonants(s2);
    convert_lower(s3);
    vec(v);
    for(auto& x:v){
        cout << x << " ";
    }
    cout << endl;
    cout << s1 << " " << s2 << " " << s3 << endl;
    return 0;
}