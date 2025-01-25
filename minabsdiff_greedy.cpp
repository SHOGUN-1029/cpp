#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,temp;
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	temp = INT_MAX;
	int ans ;
	for (int i = 1; i < n; ++i)
	{
		ans = abs(arr[i] - arr[i-1]);
		temp = min(ans,temp);
		
	}
	cout<<temp;
	
}