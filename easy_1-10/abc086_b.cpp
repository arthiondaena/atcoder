//array
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int a{}, b{}, con{}, r{};
    cin>>a>>b;
    int c=b, digits{};
    while(c!=0){
        c/=10;
        digits++;
    }
    b+=pow(10, digits)*a;
    int sqr=sqrt(b);
    string ans="No";
    if(sqr*sqr==b)
        ans="Yes";
    cout<<ans;
    return 0;
}