#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{};
    cin>>n;
    const double y=1.08;
    int x=n/y;
    if((x+1)*y-n>=1&&(x)*y-n!=0){
        cout<<":(";
    }
    else{
        if((x)*y-n==0)
            cout<<x;
        else
            cout<<x+1;
    }

    return 0;
    
}