//array
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s; 
    cin>>s;
    auto sz=s.size();
    int count{0}, ans{};
    for(decltype(sz) i=1; i<sz; i++){
        if(s[i]=='A'||s[i]=='C'||s[i]=='G'||s[i]=='T')
            count++;
        else{
            if(count>ans)
                ans=count;
            count=0;
        }
    }
    cout<<max(count, ans);
    return 0;
}