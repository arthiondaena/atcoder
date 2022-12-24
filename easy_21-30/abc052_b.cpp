#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    char s[n];
    for(int i=0; i<n; i++)
        cin>>s[i];
    int small{}, add{};
    for(int i=0; i<n; i++){
        if(s[i]=='I')
            ++add;
        else
            --add;
        small=max(add, small);
    }
    cout<<small;
    return 0;
}