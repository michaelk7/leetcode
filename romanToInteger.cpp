#include <iostream>
using namespace std;

int romanToInt(string s) 
{
    int len = s.length();
    int answer = 0;
    for(int i = 0; i < len; i++)
    {
        switch(s[i]) 
        {
            case 'I' :
                if(s[i+1] == 'V' || s[i+1] == 'X')
                {
                    answer -= 1;
                }
                else
                {
                    answer += 1;
                }
                break;
            case 'V' :
                answer += 5;
                break;
            case 'X' :
                if(s[i+1] == 'L' || s[i+1] == 'C')
                {
                    answer -= 10;
                }
                else
                {
                    answer += 10;
                }
                break;
            case 'L' :
                answer += 50;
                break;
            case 'C' :
                if(s[i+1] == 'D' || s[i+1] == 'M')
                {
                    answer -= 100;
                }
                else
                {
                    answer += 100;
                }
                break;
            case 'D' :
                answer += 500;
                break;
            case 'M' :
                answer += 1000;
                break;
        }
    }
    return answer;
}

int main()
{
    string test = "MCMXCIV";
    int answer = romanToInt(test);
    cout << answer;
}