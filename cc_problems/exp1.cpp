#include <iostream>
using namespace std;
int main()
{
    int f = 1, g = 2;
    if (++g > 0 || f-- > 2)
    {
        cout << "stage 1 ";
    }
    else
    {
        cout << "stage 2";
    }
    cout << f << g << endl;
    return 0;
}
bool isValidParenthesis(string s)
{
    stack<char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            ans.push(ch);
        }
        else
        {
            if (!ans.empty())
            {
                char tos = ans.top();
                if ((ch == ')' && top == '(')

                    || (ch == '}' && top == '{') ||

                    (ch = '[' && top == '['))

                {

                    ans.pop();
                }

                else
                {

                    return false;
                }
            }

            else
            {

                return false;
            }
        }
    }

    if (ans.empty())

    {

        return true;
    }

    else
    {

        return false;
    }
}
}
}