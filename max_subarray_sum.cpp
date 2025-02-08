#include <bits/stdc++.h>
using namespace std;
int n;
double soln(int arr[]){
    double sum,m;
    sum=0;
    m=0;
    for (int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        else{
            m=max(m,sum);
        }
    }
    return m;
}
int main(){
    cin>>n;
    int arr[n];
    double ans;
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]>=0){
            flag=1;
        }
    }
    if(flag==1){
    ans = soln(arr);}
    else{
        ans = *max_element(arr,arr+n);
    }
    cout << fixed << setprecision(0) << ans;
}
