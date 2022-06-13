#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
	if(s.size() % 2 != 0) return false;
        
    stack<char> stack;
        
    for(int i = 0; i < s.size(); i++)
    {
        if(s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '[')
        {
            stack.push(s.at(i));
        }
        else if(s.at(i) == ')' && !stack.empty() && stack.top() == '(')
            stack.pop();
        else if(s.at(i) == '}' && !stack.empty() && stack.top() == '{')
            stack.pop();
        else if(s.at(i) == ']' && !stack.empty() && stack.top() == '[')
                stack.pop();
        else
            return false;
    }
        
    return stack.empty();
}

int main()
{
	string test = "{()}";
	if(isValid(test))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

}