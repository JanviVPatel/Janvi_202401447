//leetcode solution only function

class Solution {
    public:
        int firstUniqChar(string s) {
           unordered_map<char,int>unique;
           for(char c:s)
           {
            unique[c]++;
           }
           for(int i=0;i<s.length();i++)
           {
            if(unique[s[i]] == 1)
            {
                return i;
            } 
           }
           return -1;
        }
    };

//solution with whole programm
#include<iostream>
#include<unordered_map>
using namespace std;
int unique(string s)
{
    unordered_map<char,int>unique;
    for(char c:s)
    {
     unique[c]++;
    }
    for(int i=0;i<s.length();i++)
    {
     if(unique[s[i]] == 1)
     {
         return i;
     } 
    }
    return -1;
}
int main()
{
    string s;
    cin>>s;
    int ans=unique(s);
    cout<<ans;
    return 0;
}    

//output
/*
codeforces  //input
2           //output = d is the 1st unique character and it's index is 2
*/