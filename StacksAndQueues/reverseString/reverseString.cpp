#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    stack<char> reversed;
    
    for (size_t i = 0; i < text.length(); i++)
    {
        reversed.push(text[i]);
    }

    while (reversed.size()) {
        char t = reversed.top();
        reversed.pop();
        cout << t;
    }
    cout << endl;

}