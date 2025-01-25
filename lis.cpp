#include <bits/stdc++.h>
using namespace std;
int n;
int sol = INT_MIN ; 

void lis(vector<int> &arr , int i , vector<int> &ans){
	if(i>=n){
		int temp = ans.size();
		sol = max(sol,temp);
		return ;
	}
	if(arr[i]>=ans[ans.size()-1]){
		ans.push_back(arr[i]);
		lis(arr,i+1,ans);
		ans.pop_back();
		lis(arr,i+1,ans);
	}
	else{
		lis(arr,i+1,ans);
	}
}

int main(){
	cin>>n;
	vector<int>arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	vector<int> ans;
	ans.push_back(INT_MIN);
	lis(arr,0,ans);
	cout<<sol-1;
	
}