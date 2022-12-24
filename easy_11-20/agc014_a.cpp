#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int a{}, b{}, c{}, count{};
    cin>>a>>b>>c;
    if(a==b&&b==c&&c==a){
        cout<<"-1";
        return 0;
    }
    while(a%2==0&&b%2==0&&c%2==0){
        int d, e, f;
        d=(b+c)/2;
        e=(a+c)/2;
        f=(a+b)/2;
        a=d;b=e;c=f;
        count++;
    }
    cout<<count;
    return 0;
}