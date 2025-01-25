#include<iostream>
#include<vector>
#include<map>
using namespace std;

void findDuplicate(const vector<int>&nums)
{
    map<int, int >countMap;
    for(int num : nums)
    {
        countMap[num]++;
    }
    for(const auto& pair : countMap)
    {
        if(pair.second > 1)
        {
            cout<<pair.first<<"appears"<<pair.second<<"times"<<endl;
        }
    }
}
int main()
{
    vector<int> nums = {4,5,6,7,4,5,8,9,4};
    findDuplicate(nums);
    return 0;
}