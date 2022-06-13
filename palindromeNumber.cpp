#include <iostream>

using namespace std;

bool isPalindrome(int x) 
{
    if(x < 0)
        return false;
        
    long rev = 0;
    int digit = 0;
    int num = x;
        
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }while(num != 0);
    
    if(rev == x)
        return true;

    return false;
}

int main()
{
	int test = 121;
	if(isPalindrome(test))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}