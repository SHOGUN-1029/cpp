#include <bits/stdc++.h>
using namespace std;

int lcs(char str1[],char str2[],int n,int m,vector<vector<int>>&t){
	if(n==0||m==0){
		return 0;
	}
	if(t[n][m]!=-1){
		return t[n][m];
	}
	if(str1[n-1]==str2[m-1]){
		return t[n][m] = 1+ lcs(str1,str2,n-1,m-1,t);
	}
	else{
		return t[n][m] = max(lcs(str1,str2,n,m-1,t) , lcs(str1,str2,n-1,m,t));
	}
}

int main(){
	int n,m;      
	cin>>n>>m;
	char str1[n];
	char str2[m];
	cin>>str1;
	cin>>str2;
	vector<vector<int>> t(n + 1, vector<int>(m + 1, -1));
	cout<<lcs(str1,str2,n,m,t);
	for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                cout<< t[i][j] ; 
            }
        }
}