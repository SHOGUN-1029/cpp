#include <bits/stdc++.h>
using namespace std;

 vector<vector<int>> t(1001, vector<int>(1001, -1));

int mcm(vector<int>&arr,int i,int j,int m){
	int k,ans;
	if(i>=j){
		return 0;
	}
	if(t[n][m]!=-1){
		return t[n][m];
	}
	for (int k = i; k<j; ++k)
	{
		ans = mcm(arr,i,k,m)+mcm(arr,k+1,j,m)+arr[i-1]*arr[j]*arr[k];
		m = min(m,ans);
	}
	return t[n][m] = m;

	
}

int main(){
	int n;
	cin>>n;
	int m = INT_MAX;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>arr[i];
	}
	cout<<mcm(arr,1,n-1,m);
}