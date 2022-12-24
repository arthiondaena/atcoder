//array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{};
    cin>>n;
    vector<int>arr;
    int ans{};
    while(n!=0){
        arr.push_back(n);
        if(n%2==0)
            n/=2;
        else
            n=(3*n+1);
        for(int i=0; i<arr.size(); i++){
            if(n==arr[i]){
                ans=arr.size();
                cout<<ans+1;
                return 0;
            }
        }
    }
    return 0;
}