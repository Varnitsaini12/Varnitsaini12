#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int n = s.length();
        cout<<n<<endl;
        while(n>0){
            if(s[--n]!=' '){
                len++;
                cout<<"len-->"<<len<<endl;
            }
            else if(len>0){
                return len;
            }
        }
        
        return len;
    }
};

int main(){
    string s = "   fly me   to   the moon  ";
    Solution S1;
    cout<<S1.lengthOfLastWord(s)<<endl;
}