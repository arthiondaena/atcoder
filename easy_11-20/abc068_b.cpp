//array
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n{}, great{};
    cin>>n;
    for(int i=1; great<=n; i++){
        great=pow(2, i);
    }
    cout<<great/2;
    //method 2
/*
    for(int i=0; i<20; i++){
        if(n<(1<<(i+1))){
            cout<<(1<<i);
            break;
        }
    } */
    return 0;
}