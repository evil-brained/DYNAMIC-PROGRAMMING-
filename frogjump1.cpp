/* ****YV JAWAHAR DP SERIES*****

PROBLEM STATEMENT :MINIMUM ENERGY REQURIED FOR THE FROG TO JUMP TO THE Nth STAIRCASE


Approach1:Memoization TC:O(N) SC:O(M)+O(N)
Approach2:Tabulation  TC:O(N) SC:+O(N)
Approach3:Space optimization   TC:O(N) SC:O(1)


*/
#include<bits/stdc++.h>
using namespace std;
/*int f(int ind,vector<int>&heights,vector<int>&dp)
{

    //memoization
    if(ind==0) return 0;
    if(dp[ind]!=-1)return dp[ind];
    int left=f(ind-1,heights,dp)+abs(heights[ind]-heights[ind-1]);
    int right=INT_MAX;
    if(ind>1) right=f(ind-2,heights,dp)+abs(heights[ind]-heights[ind-2]);
    return dp[ind]=min(left,right);
}*/
int main()
{
int n,x;
cin>>n;
vector<int>heights;
for(int i=0;i<n;++i)
{
    cin>>x;  
    heights.push_back(x);
}
/*
 TABULATION
vector<int>dp(n);
dp[0]=0;
for(int i=1;i<n;++i)
{
    int l=dp[i-1]+abs(heights[i]-heights[i-1]);
    int r=INT_MAX;
    if(i>1)
    {
        int r=dp[i-2]+abs(heights[i]-heights[i-2]);
    }
    dp[i]=min(r,l);
}

*/

//Space Optimization
int prev=0;
int prev2=0;
for(int i=1;i<n;++i)
{
    int l=prev+abs(heights[i]-heights[i-1]);
    int r=INT_MAX;
    if(i>1)
    {
        int r=prev2+abs(heights[i]-heights[i-2]);
    }
    int curr=min(r,l);
    prev2=prev;
    prev=curr;
}

cout<<"minimum energy required:"<<prev;
}