#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,ans;
    vector <pair<int,int>> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back({x,i+1});
    }
    sort(arr.begin(),arr.end());
    ans=0;
    for(int i=1;i<=n;i++){
        if(arr[i].second<arr[i-1].second){
            ans++;
        }
    }
    cout<<ans;
}
