
//Leetcode Solution which contaion only function
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>ans(2,0);
            for(int i=0;i<nums.size();i++)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                int temp=nums[i]+nums[j];
                if(temp==target)
                {
                    ans[0]=i;
                    ans[1]=j;
                    return ans;
                }
                }
            }
            return ans;
        }
    };

//whole programme
#include<iostream>
#include<vector>
using namespace std;
vector<int> twosum(vector<int>&nums ,int target)
{
    vector<int>ans(2,0);
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            int temp=nums[i]+nums[j];
            if(temp==target)
            {
                ans[0]=i;ans[1]=j;
            }
        }
    }
    return ans;
}
int main()
{
    int n;cin>>n;
    int target;cin>>target;
    vector<int>nums(n,0);
    //to take input
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int>ans=twosum(nums,target);
    for(int i:ans){cout<<i<<" ";}
    return 0;
}
//output
/*
3  //input n
6  //input target
3  //elements of nums
2
3
0 2 //ans
*/