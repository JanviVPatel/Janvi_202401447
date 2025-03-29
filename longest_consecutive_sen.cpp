//leetcode solution with only function
class Solution {

    public:
        int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
    
        sort(nums.begin(), nums.end());
    
        int longest = 1, current = 1;
    
        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) continue;
    
            if (nums[i] == nums[i - 1] + 1) {
                current++;
            } else {
                longest = max(longest, current);
                current = 1;
            }
        }
    
        return max(longest, current);
    }
    
    };

//whole program    
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;

    sort(nums.begin(), nums.end());

    int longest = 1, current = 1;

    for (size_t i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) continue;

        if (nums[i] == nums[i - 1] + 1) {
            current++;
        } else {
            longest = max(longest, current);
            current = 1;
        }
    }

    return max(longest, current);
}
int main()
{
    int n;cin>>n;
    vector<int>nums(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int ans=longestConsecutive(nums);
    cout<<ans;
    return 0;
}
//output
/*
6  //input size n
100 //elements
4
200
1
3
2
4 //answer bcz longest consecutive is [1,2,3,4]
*/