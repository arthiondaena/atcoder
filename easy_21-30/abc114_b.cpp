//array
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{   
    int fav=753;
    int low{};
    string s;
    cin>>s;
    for(int i=0; i<(s.size()-2);i++){
        string a= s.substr(i, 3);
        int b=stoi(a);
        if(i==0){
            low=abs(fav-b);
        }
        low=min(low, abs(fav-b));
    }
    cout<<low;
    return 0;
}