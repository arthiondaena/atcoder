//array
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, hyc{};
    string s;
    cin>>a>>b>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='-')
            hyc++;
    }
    if((hyc==1)&&(s[a]=='-')&&s.size()==(a+b+1))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}