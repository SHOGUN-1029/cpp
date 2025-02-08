#include <algorithm>
#include <iostream>
using namespace std;
int n,w;
int soln(int arr[] , int a){
    sort(arr,arr+n);
    int f,r,c;
    c=0;
    f=0;
    r=n-1;
    while(f<r){
        if(arr[f]+arr[r]>a){
            r--;
        }   
        else{
            c++;
            arr[f]=0;
            arr[r]=0;
            f++;
            r--;
        }
    }
    for(int i=0;i<n;i++){
        if (arr[i]!=0 && arr[i]<=a){
            c++;
        }
    }
    return c;
}
int main()
{
    int ans;
    cin>>n>>w;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ans = soln(arr,w);
    cout<<ans;
}
