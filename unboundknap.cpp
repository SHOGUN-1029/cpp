#include <bits/stdc++.h>
using namespace std;

int uknap(vector<int>&arr,vector<int>&cost,int wgt,int n,vector<vector<int>>&t){
	if(n<=0||wgt<=0){
		return 0;
	}
	if(t[n][wgt]!= -1){
		return t[n][wgt];
	}
	
	if(wgt>=arr[n-1]){
		return t[n][wgt] = max(cost[n-1]+uknap(arr,cost,wgt-arr[n-1],n,t) , uknap(arr,cost,wgt,n-1,t));
	}
	else{
		return t[n][wgt] = uknap(arr,cost,wgt,n-1,t) ;
	}
}

int main(){
	int n;
	cin>>n;
	int wgt;
	cin>>wgt;
	vector<int> arr(n);
	vector<int> cost(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>arr[i];
		cin>>cost[i];
	}
	
	int ans;
    vector<vector<int>> t(n + 1, vector<int>(wgt + 1, -1));
	ans = uknap(arr,cost,wgt,n ,t);
	cout<<ans;
}