#include <bits/stdc++.h>
using namespace std;

const int x = 1e5 + 10;
vector<int> arr[x];
bool vis[x];



void dfs(int v){
	//action on vertex before entering vertex
	vis[v] = true;
	
	for(int child : arr[v]){
		if(vis[child])continue;
		//action on child before entering child
		cout<<v<<" "<<child;
		dfs(child);
		//action on child after exiting child
	}
	//action on vertex before exiting vertex
	
}

int main(){
	int n,m;
	cin>>n>>m;
	int v1,v2;
	for (int i = 0; i < m; ++i)
	{
		/* code */
		cin>>v1>>v2;
		arr[v1].push_back(v2);
		arr[v2].push_back(v1);
	}
	dfs(1);
}