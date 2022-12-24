//array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{};
    cin>>n;
    int arr[n+1], ans[n+1];
    for(int i=1; i<n+1; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n+1; i++){
        ans[arr[arr[i]]]=arr[i];
    }
    for(int i=1; i<n+1; i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}