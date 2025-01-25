#include <bits/stdc++.h>
using namespace std;
int n;

void combn(vector<int>&arr ,vector<int>&ans, int index , int sum){
	if(index==n || sum<=0 ){
		if(sum==0){
		for (std::vector<int>::iterator i = ans.begin(); i != ans.end(); ++i)
		{
			cout<<*i;
		}
		cout<<endl;}	
		return ;
	}
	
	if(arr[index]<=sum){
	ans.push_back(arr[index]);
	
	combn(arr,ans,index,sum-arr[index]);
	ans.pop_back();}
	
	combn(arr,ans,index+1,sum);
}
int main(){
	
	cin>>n;
	vector<int>arr(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>arr[i];
	}
	vector<int> ans;
	combn(arr,ans,0,7);
}