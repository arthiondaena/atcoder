//array
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n{}, m;
    cin>>n>>m;
    int szm;
    cin>>szm;
    int rev[szm];
    for(int j=0; j<szm;j++){
        cin>>rev[j];
    }
    sort(rev, rev+szm);
    for(int i=0; i<n-1; i++){
        int sz;
        cin>>sz;
        int arr1[sz];
        for(int j=0; j<sz; j++)
            cin>>arr1[j];
        sort(arr1, arr1+sz);
        int k=0;
        bool g=0;
        for(int j=0; j<szm; j++){
            if(rev[j]==0)
                continue;
            for(; k<sz; k++){
                if(rev[j]==arr1[k]){
                    g=1;
                    k++;
                    break;
                }   
            }
            if(g==0){
                rev[j]=0;
                k=0;
            }
            g=0;
        }
    }
    int count{};
    for(int i=0; i<szm; i++){
        if(rev[i]!=0)
            count++;
    }
    cout<<count;
    return 0;
    
}