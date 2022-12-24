//array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{}, k{}, q{};
    cin>>n>>k>>q;
    int arr[n+1];
    for(int i=1; i<n+1; i++){
        arr[i]=(k-q);
    }
    for(int i=0; i<q; i++){
        int pos{};
        cin>>pos;
        arr[pos]++;
    }
    for(int i=1; i<n+1; i++){
        if(arr[i]>0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}