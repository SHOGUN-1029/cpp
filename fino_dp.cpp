#include <bits/stdc++.h>
using namespace std;
long long t1,t2;

long long fact(int n,vector<long long>&arr){
	if(n==1){
		return t1;
	}
	if(n==2){
		return t2;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	
	return arr[n] = fact(n-2,arr) + fact(n-1,arr)*fact(n-1,arr);
}

int main(){
	int n;
	cin>>t1>>t2>>n;
	vector<long long> arr(n+1,-1);
	long long  ans = fact(n,arr);
	cout<<ans;
}