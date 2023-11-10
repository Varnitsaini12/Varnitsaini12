#include <iostream>
#include <unordered_map>
using namespace std;

string unique_substring(string str)
{
    int i = 0;
    int j = 0;

    int window_lenght = 0;
    int max_window_lenght = 0;
    int start_window = -1;

    unordered_map<char, int> m;

    while(j < str.length()){
        char ch = str[j];
        // if it is inside hashmap  & its index>= start of current window
        if(m.count(ch)!=0 and m[ch]>=i){
            i = m[ch] + 1;
            window_lenght = j-i; //updated remaining window lenght excluding current char as we did window_lenght++ in next step

        }

        // update the last occ
        m[ch] = j;
        window_lenght++;
        j++;

        // update max window lenght at every step
        if(window_lenght > max_window_lenght){
            max_window_lenght = window_lenght;
            start_window = i;
        }

    }
    return str.substr(start_window,max_window_lenght);
}

int main()
{
    string input;
    cin >> input;
    cout << unique_substring(input) << endl;
    return 0;
}