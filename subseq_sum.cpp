#include <bits/stdc++.h>
using namespace std;
int n;
int val;

void sum(int index,vector<int>&arr,vector<int> &ans, int sums){
	if (index>=n||sums==val){
		if (sums==val)
		{
			for (std::vector<int>::iterator i = ans.begin(); i != ans.end(); ++i)
			{
				cout<<*i;
			}
			cout<<endl;
		}
		return ;
		}
	
	
	ans.push_back(arr[index]);
	sum(index+1,arr,ans,sums+arr[index]);
	ans.pop_back();
	sum(index+1,arr,ans,sums);
}



int main(){
	cin>>n;
	vector<int>arr(n);
	cin>>val;
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>arr[i];
	}
	vector<int> ans;
	sum(0,arr,ans,0);

}