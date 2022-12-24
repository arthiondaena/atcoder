//array
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int count{};
    string ans="None";
    string s;
    cin>>s;
    string alpha="abcdefghijklmnopqrstuvwxyz";
    sort(s.begin(), s.end());
    for(int i=0; i<alpha.size(); i++){
        for(int j=0; j<s.size(); j++){
            if(alpha[i]==s[j]){
                count++;
            }
            else{
                if(count!=0){
                    s.erase(0, count);
                    break;
                }
                else{
                    ans=alpha[i];
                    cout<<ans;
                    return 0;
                }
            }
        }
        count=0;
    }
    cout<<ans;
    return 0;
}