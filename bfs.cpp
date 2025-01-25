#include <bits/stdc++.h>
using namespace std;

const int x = 1e5 + 10;
vector<int> arr[x];
bool vis[x];
queue <int> q;
int level[x] = {0};

void bfs(int vertex){
	q.push(vertex);
	vis[vertex] = true;
	
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		cout<<curr<<" ";
		for(int child : arr[curr]){
			if(vis[child]) continue;
			q.push(child);
			vis[child] = true;
			level[child] = level[curr]+1;
		}	
	}
	cout<<endl;	
}

int main(){
	int n;
	cin>>n;
	int v1,v2;
	for (int i = 0; i <= n; ++i)
	{
		/* code */
		cin>>v1>>v2;
		arr[v1].push_back(v2);
		arr[v2].push_back(v1);
	}
	bfs(1);
	
	for (int i = 0; i < n; ++i)
	{
		/* code */cout<<level[i]+1;
	}
	
}