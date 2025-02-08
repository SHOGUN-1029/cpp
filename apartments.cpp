#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d;
    cin>>n>>m>>d;
    vector<int>arr(n);
    vector<int>arb(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arb[i];
    }
    sort(arr.begin(),arr.end());
    sort(arb.begin(),arb.end());
    int i,j,ans;
    i=j=0;
    ans=0;
    while(i<n && j<m){
        if(abs(arr[i]-arb[j])<=d){
            i++;
            j++;
            ans++;
        }
        else if(arr[i]-arb[j]>d){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<ans;

}

