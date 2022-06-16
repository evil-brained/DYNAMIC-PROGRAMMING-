/* YV JAWAHAR - GRAPH THEORIES */
/* KADANE'S ALGORITHM TO FIND THE MAXIMUM SUM OF SUBARRAY IN AN GIVEN ARRAY */
#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
}
int main()
{
	fastIO();
    int arr[]={1,2,3,4,5,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=*max_element (arr,arr+n);
    int sum=0;
    for(int i=0;i<n;++i){
    	
    	if(sum+arr[i]<0)
    	sum=0;
    	else{
		sum+=arr[i];
    	ans= (sum > ans ) ? sum:ans;
		}
	}
	printf("the maximum sum of the subarray is : %d",ans);
    
    

return 0;
}
