#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> answer;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            if((nums[i] + nums[j]) == target)
            {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
        }
    }
    return answer;
}

int main()
{
    vector<int> testCase1;
    testCase1.push_back(2);
    testCase1.push_back(7);
    testCase1.push_back(11);
    testCase1.push_back(15);
    int target = 9;
    vector<int> answer = twoSum(testCase1, target);
    for(int i = 0; i < answer.size(); i++)
    cout << answer[i];
}