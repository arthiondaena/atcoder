//array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n{}, m{}, x{};
    cin>>n>>m>>x;
    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    auto begin=arr;
    auto end=arr+m;
    auto it=lower_bound(begin, end, x);
    int ans=it-begin;
    ans=min(m-ans, ans);
    cout<<ans;
    return 0;
}