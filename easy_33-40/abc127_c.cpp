//array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int big_l=0, small_r=0x3f3f3f3f;
    for(int i=0; i<m; i++){
        int l, r;
        cin>>l>>r;
        big_l=max(big_l, l);
        small_r=min(small_r, r);
    }
    cout<<max(small_r-big_l+1, 0);
    return 0;
}