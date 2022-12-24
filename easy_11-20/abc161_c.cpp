#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    long long n{}, k{}, low{};
    cin>>n>>k;
    if(k==1){
        cout<<'0';
        return 0;
    }
    if(n>=k){
        n%=k;
    }
    if(n>k/2){
        n=k-n;
    }
    cout<<n;
    return 0;
    
}