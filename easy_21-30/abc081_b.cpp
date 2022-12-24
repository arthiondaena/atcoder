//array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{}, count{};
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==1){
            cout<<count;
            return 0;
        }
    }
    while(1){
        count++;
        for(int i=0; i<n; i++){
            arr[i]/=2;
            if(arr[i]%2==1){
            cout<<count;
            return 0;
            }
        }
    }
    return 0;
}