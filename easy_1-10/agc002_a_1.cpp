#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    if((a>0&&b<0)||(a<0&&b>0)||a==0||b==0){
        cout<<"Zero";
    }
    if(a>0&&b>0){
        cout<<"Positive";
    }
    if(a<0&&b<0){
        if((b-a)%2==1)
            cout<<"Positive";
        else
            cout<<"Negative";
    }
    return 0;
    
}