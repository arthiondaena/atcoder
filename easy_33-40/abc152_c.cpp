//array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{};
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int val{1}, j=0;
    for(int i=0; i<n; i++){
        if(arr[j]>arr[i]){
            val++;
            j=i;
        }
    }
    cout<<val;
    return 0;
    
}