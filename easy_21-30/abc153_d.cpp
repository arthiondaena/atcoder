#include <iostream>

using namespace std;

int main(){
    long long h, mcount{1}, att{};
    cin>>h;
    att+=mcount;
    while(h!=1){
        h/=2;
        mcount*=2;
        att+=mcount;
    }
    cout<<att;
    return 0;
}