#include <bits/stdc++.h>
using namespace std;

int combine(vector<int>&arr,int low,int high){
	int i,j;
	i = low+1;
	j=  high;
	int pivot = arr[low];
	while(i<= j){
		while(arr[i]<=pivot && i<=high){
			i++;
		}
		while(arr[j]> pivot && j>=low){
			j--;
		}
		if(i<j){
		swap(arr[i],arr[j]);}
	}
	swap(arr[low],arr[j]);
	return j;
}

void quick(vector<int>&arr,int low,int high){
	if(low<high){
		int q = combine(arr,low,high);
		quick(arr,low,q-1);
		quick(arr,q+1,high);
	}
}


int main(){
	int n;
	cin>>n;
	vector<int>arr(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>arr[i];
	}
	quick(arr,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		/* code */cout<<arr[i];
	}
}