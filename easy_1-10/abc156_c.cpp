#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int n{};
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int ans=(arr[n-1]-arr[0])/2;
    
    int out{0}, out1{};
    for(int j=arr[0]; j<arr[n-1]; j++){
        for(int i=0; i<n; i++){
            out1+=((j-arr[i])*(j-arr[i]));
        }
        if(j==arr[0]){
            out=out1;
            continue;
        }
        if(out1<out){
            out=out1;
        }
        out1=0;
    }
    cout<<out;
    return 0;
    
}