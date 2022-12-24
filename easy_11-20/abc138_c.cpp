//array
#include <iostream>
#include <algorithm>
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
    double ing{(double)arr[0]};
    for(int i=1; i<n; i++){
        ing=(ing+arr[i])/2;
    }
    cout<<ing;
    return 0;
}