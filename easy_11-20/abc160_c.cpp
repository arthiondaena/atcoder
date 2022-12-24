//array
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k{}, n{}, dis{}, great{}, edi{};
    cin>>k>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    edi=k-arr[n-1]+arr[0];
    for(int i=0; i<(n-1); i++){
        dis+=arr[i+1]-arr[i];
        if(great<arr[i+1]-arr[i])
            great=arr[i+1]-arr[i];
    }
    if(great>edi){
        dis-=great;
        dis+=edi;
    }

    cout<<dis;
    return 0;
}