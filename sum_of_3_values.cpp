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
    int a,f,r;
    for(a=0;a<=n-3;a++){
        f=a+1;
        r=n-1;
        while(f<r){
            if(arr[a].first+arr[f].first+arr[r].first>s){
                r--;
            }
            else if(arr[a].first+arr[f].first+arr[r].first<s){
                f++;
            }
            else{
                cout<<arr[a].second<<" "<<arr[f].second<<" "<<arr[r].second;
                return 0;
        }
        }
    }
    cout<<"IMPOSSIBLE";
}
        