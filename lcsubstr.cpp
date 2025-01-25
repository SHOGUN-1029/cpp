#include <bits/stdc++.h>
using namespace std;

int lcs(char str1[],char str2[],int n,int m,int count){
	if(n==0||m==0){
		return 0;
	}
	if(str1[n-1]==str2[m-1]){
		return count = 1+ lcs(str1,str2,n-1,m-1,count);
	}
	else{
		return count = max({count, lcs(str1,str2,n,m-1,count), lcs(str1,str2,n-1,m,count)}) ;
		
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	char str1[n];
	char str2[m];
	cin>>str1;
	cin>>str2;
	int count = 0 ;
	vector<vector<int>> t(n + 1, vector<int>(m + 1, -1));
	cout<<lcs(str1,str2,n,m,count);

}