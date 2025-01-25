	#include <bits/stdc++.h>
	using namespace std;

	const int x = 1e6 + 10;
	vector<int> arr[x];
	int depth[x]={0};
	int height[x]={0};

	void dfs(int v,int par){
		//action on vertex before entering vertex
		
		for(int child : arr[v]){
			if(child == par)continue;
			//action on child before entering child
			depth[child] = depth[v]+1;
			dfs(child,v);
			//action on child after exiting child
			height[v] = max(height[v],height[child]+1);
		}
		//action on vertex before exiting vertex
		
	}

	int main(){
		int m;
		cin>>m;
		int v1,v2;
		for (int i = 0; i < m; ++i)
		{
			/* code */
			cin>>v1>>v2;
			arr[v1].push_back(v2);
			arr[v2].push_back(v1);
		}
		dfs(1,0);
		for (int i = 0; i <= m; ++i)
		{
			/* code */cout<<height[i]<<depth[i];
		}
	}