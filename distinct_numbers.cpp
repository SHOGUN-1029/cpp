
#include <iostream>
#include <algorithm>
using namespace std;
int soln(int arr[] , int n){
    int a=1;
    sort(arr,arr+n);
    for(int j=1;j<n;j++){
        if (arr[j-1]!= arr[j]){
            a++;
        }}
        return a;
}
int main()
{
    int n,ans;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ans = soln(arr , n);
    cout<<ans;
}
