#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[26]{0};
    for(auto c:s){
        int a=c;
        a-=97;
        arr[a]++;
    }
    string ans="Yes\n";
    for(int i=0; i<26; i++){
        if(arr[i]%2==1){
            ans="No\n";
            break;
        }
    }
    cout<<ans;
    return 0;
}