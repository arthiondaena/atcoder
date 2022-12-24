#include <iostream>
#include <vector>
using namespace std;


int main()
{
    unsigned long long h{}, w{};
    cin>>h>>w;
    unsigned long long ans=(h*w+1)/2;
    if(h==1||w==1)
        cout<<'1';
    else
        cout<<ans;
    return 0;
}