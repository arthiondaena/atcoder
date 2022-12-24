//array
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n{}, diff{}, count{};
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=(n-1); i>=0; i--){
        if(count%2==0)
            diff+=arr[i];
        else
            diff-=arr[i];
        count++;
    }
    cout<<diff;
    return 0;
}