#include <iostream>
using namespace std;

int main(){
    long long n, a, b;
    cin>>n>>a>>b;
    long long rem{};
    long long ans=n/(a+b)*a;
    rem=n%(a+b);
    ans+=min(a, rem);
    cout<<ans;
    return 0;
}