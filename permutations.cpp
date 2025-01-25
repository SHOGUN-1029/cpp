#include <bits/stdc++.h>
using namespace std;
int n;

void perm(vector<int>&arr , vector<int> ans , vector<int> vis){
    if(ans.size()==n){
        for (int s = 0;s < n; ++s)
        {
            cout<< ans[s]<<" " ;
        }
        cout<<endl;
        return ;
    }
    
    for(int i=0;i<n;i++){
        if(vis[i] == 1) continue ;
        vis[i] = 1 ;
        ans.push_back(arr[i]);
        perm(arr,ans,vis);
        vis[i] = 0 ;
        ans.pop_back();
    }
}


int main(){
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>arr[i];
	}
	vector<int> ans;
	vector<int> vis(n,0) ;
    perm(arr,ans,vis);
    
    
}