//al subsequences using recursion
#include <bits/stdc++.h>
using namespace std;

int n;
void subseq(int index , vector<int>&arr,vector<int>&ans){
	if(index>=n){
		for (std::vector<int>::iterator i = ans.begin(); i != ans.end(); ++i)
		{
			cout<<*i;
		}
		cout<<endl;
		return ;
	} 
	ans.push_back(arr[index]);
	subseq(index+1 , arr,ans);
	ans.pop_back();
	subseq(index+1 , arr,ans);
}


int main(){
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>arr[i];
	}
	vector<int>ans;
	subseq(0,arr,ans);
}