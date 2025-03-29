//leetcode solution
class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> count;
            for (int num : nums) {
                count[num]++;
            }
            vector<pair<int, int>> freqPairs;
            for (auto& pair : count) {
                int num = pair.first;
                int freq = pair.second;
                freqPairs.push_back({num, freq});
            }
             sort(freqPairs.begin(), freqPairs.end(), 
                 [](const pair<int, int>& a, const pair<int, int>& b) {
                     if (a.second != b.second)
                      {
                         return a.second > b.second;
                     }
                     return a.first < b.first;
                 });
            vector<int> result;
            for (int i = 0; i < k; i++) {
                result.push_back(freqPairs[i].first);
            }
            
            return result;
        }
    };
//whole program
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> firstkfreq(vector<int>&nums,int k)
{
    unordered_map<int, int> count;
    for (int num : nums) {
        count[num]++;
    }
    vector<pair<int, int>> freqPairs;
    for (auto& pair : count) {
        int num = pair.first;
        int freq = pair.second;
        freqPairs.push_back({num, freq});
    }
     sort(freqPairs.begin(), freqPairs.end(), 
         [](const pair<int, int>& a, const pair<int, int>& b) {
             if (a.second != b.second)
              {
                 return a.second > b.second;
             }
             return a.first < b.first;
         });
    vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(freqPairs[i].first);
    }
    
    return result;
}
int main()
{
    int k;cin>>k;
    int n;
    cin>>n;
    vector<int>nums(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int>ans=firstkfreq(nums,k);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}    
//output
/*
2 //input k
6 //input n
5 //input elements
6
3
3
5
4
3 5  //answer first 2 most frequent element
*/