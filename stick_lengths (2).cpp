#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,median;
    cin>>n;
    vector <int>arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
   if(n%2!=0){
       median = arr[n/2];
   }
   else{
       median = (arr[(n-1)/2] + arr[(n/2)])/2;
   }
    double cost=0;
    int temp;
    for(int i=0;i<n;i++){
        temp = abs(median-arr[i]);
        cost = cost+temp;
    }
    cout << fixed << setprecision(0) << cost;
}