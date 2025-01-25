#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>arr[i];
	}
	sort(arr.begin(),arr.end(),greater<int>());
	double sum=0;
	for (int i = 0; i < n; ++i)
	{
		sum = sum+ (pow(2,i) * arr[i]);
	}
	cout<< fixed << setprecision(0)<<sum ;

}