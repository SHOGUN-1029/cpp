#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    double s =1;
    for(int i=0;i<n;i++){
        if(s<arr[i]){
            cout << fixed << setprecision(0) << s;
            return 0;
        }
        s = s+arr[i];
    }
    cout << fixed << setprecision(0) << s;

}
