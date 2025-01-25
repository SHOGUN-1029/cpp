#include <bits/stdc++.h>
using namespace std;

int coin(vector<int>&arr,int sum,int n ,vector<vector<int>> &t){
	if(n<=0){
		return INT_MAX-1;
	}
	if(sum<=0){
		return 0;
	}
	if(n==1){
		if(arr[0]%sum == 0){
			return t[n][sum] = arr[0]/sum;
		}
		else{
			return t[n][sum] = INT_MAX-1;
		}
	}
	
	if(t[n][sum]!=-1){
		return t[n][sum];
	}
	
	if(sum>=arr[n-1]){
		return t[n][sum] = min(1+coin(arr,sum-arr[n-1],n,t) , coin(arr,sum,n-1,t) );
	}
	else{
		return t[n][sum] = coin(arr,sum,n-1,t);
	}
}


int main(){
	int n,sum;
	cin>>n>>sum;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>arr[i];
	}
	vector<vector<int>> t(n + 1, vector<int>(sum + 1, -1));
	int ans = coin(arr,sum,n,t);
	cout<<ans;
}