//array
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    int n{}, k{};
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int distance{};
    for(int i=0; i<n; i++){
        if(abs(arr[i]-k)<abs(arr[i]))
            distance+=2*(abs(arr[i]-k));
        else
            distance+=2*(abs(arr[i]));
    }
    cout<<distance;
    return 0;
}