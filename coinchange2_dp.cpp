#include <bits/stdc++.h>
using namespace std;

double uknap(vector<int>&arr,int wgt,int n,vector<vector<double>>&t){
	if(n<=0){
		return 0;
	}
	if(wgt<=0){
		return 1;
	}
	if(t[n][wgt]!= -1){
		return t[n][wgt];
	}
	
	if(wgt>=arr[n-1]){
		return t[n][wgt] = uknap(arr,wgt-arr[n-1],n,t) + uknap(arr,wgt,n-1,t);
	}
	else{
		return t[n][wgt] = uknap(arr,wgt,n-1,t) ;
	}
}

int main(){
	int n,wgt;
	cin>>wgt>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>arr[i];
		
	}
	
	double ans;
    vector<vector<double>> t(n + 1, vector<double>(wgt + 1, -1));
	ans = uknap(arr,wgt,n ,t);
	cout<<fixed<<setprecision(0)<<ans;
}