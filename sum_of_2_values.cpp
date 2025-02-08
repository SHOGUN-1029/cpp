#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,s;
    cin>>n;
    cin>>s;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back({x,i+1});
    }
    sort(arr.begin(),arr.end());
    int f,r;
    f=0;
    r=n-1;
        while(f<r){
        if(arr[f].first+arr[r].first>s){
            r--;
        }
        else if(arr[f].first+arr[r].first<s){
            f++;
        }
        else{
            cout<<arr[f].second<<" "<<arr[r].second;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE";
    
}
