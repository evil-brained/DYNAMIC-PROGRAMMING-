#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int power=1e9+7;
void fastIO()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
}
int lnds( int i,int prev, vector<int>& nums,vector<vector<int>>&dp){
        if(nums.size()==i)return 0;
        
        if(dp[i][prev+1]!=-1)return dp[i][prev+1];               
         int maxi=-1e9, not_take=0, take=0;
         not_take=0+lnds( i+1, prev,nums,dp);
         if(prev==-1 || nums[i]>nums[prev]){
            take= 1+lnds( i+1, i,nums,dp);
        }
         maxi=max(take, not_take);
        return dp[i][prev+1]=maxi;
    }
    int lengthOfLIS(vector<int>& nums) {
        
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return lnds(0,-1,nums,dp);
    }
    int main()
    {
    	fastIO();
    	vector<int> nums{10,9,2,5,3,7,101,18};
    	cout<<lengthOfLIS(nums);
    	
	}
