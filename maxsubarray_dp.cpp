#include <bits/stdc++.h>
using namespace std;

void ans(){
	int n;
	cin>>n;
	vector<int> arr(n);
	int flag=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		if(arr[i]>=0){
			flag=1;
		}
	}
	
	int ss;
	ss=0;
	int sum=0;
	int m = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		sum=sum+arr[i];
		m = max(m,sum);
		if(sum<0){
			sum = 0;
		}
		if(arr[i]>=0){
			ss=ss+arr[i];
	}}
	if(flag==0){
			ss = *max_element(arr.begin(),arr.end()) ;
	}
	cout<<m<<" "<<ss<<endl;
}

int main(){
	int it;
	cin>>it;
	for (int a= 1; a<= it; ++a)
	{
		/* code */ans();
	}
}