#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{}, a{}, b{};
    cin>>n>>a>>b;
    int sum=a+b;
    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='a'&&sum!=0){
            cout<<"Yes\n";
            sum--;
        }
        else if(s[i]=='b'&&sum!=0&&b!=0){
            cout<<"Yes\n";
            b--;
            sum--;
        }
        else
            cout<<"No\n";
    }
    return 0;
    
}