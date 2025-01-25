#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		
	}
	
	sort(arr.begin() , arr.end());
	
	int a,b,c;
	for(int i=n-1;i>=0;i--){
		if(i<=1){
			break;
		}
		c = arr[i];
		b = arr[i-1];
		a = arr[i-2];
		
		if(a+b >c){
			cout<<a<<" "<<b<<" "<<c;
				return 0;
			}
			else{
				continue;
			}
	
	}
	
	cout<<-1;
	
}