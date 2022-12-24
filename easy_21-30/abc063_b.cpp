#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    char a='\0';
    bool ans=1;
    for(auto c: s){
        if(c==a){
            ans=0;
            break;
        }
        else
            a=c;
    }
    cout<<(ans?"yes":"no");
    return 0;
}