#include <bits/stdc++.h>
using namespace std;
int n;

void func(vector<pair<int,int>>&arr,vector<pair<int,int>>&ans,int i){
    if (i == n) { 
    	if(ans.size()==0)return ;
            for (auto num : ans) {
                cout << num.first << " ";
            }
            cout << endl;
        return;
    }

	
	if(ans.size() ==0 || ans[ans.size()-1].second== i-1){
		ans.push_back(arr[i]);
		func(arr,ans,i+1);
		ans.pop_back();
	}
	func(arr,ans,i+1);
}


int main(){
	cin>>n;
	vector<pair<int,int>>arr;
	int temp ; 
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>temp ; 
		arr.push_back({temp,i});
	}
	vector<pair<int,int>> ans ; 
	func(arr,ans,0);
}