#include <bits/stdc++.h>
using namespace std;

int sub(vector<int>&arr,int n,int sum){
	if(sum==0){
		return 1;
	}
	if(n==0){		return 0;
	}
	
	if(sum<=arr[n-1]){
		return sum(arr,n-1,sum-arr[n-1])||sum(arr,n-1,sum);
	}
	else{
		return sum(arr,n-1,sum);
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
	int ans = sub(arr,n,sum);
	if(ans==1){
		cout<<'True';
	}
	else{
		cout<<'False';
	}
}