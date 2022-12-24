//array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n=5;
    int arr[n], small{9}, spos{};
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(small>(arr[i]%10)&&arr[i]%10!=0){
            small=arr[i]%10;
            spos=i;
        }
    }
    int sum{};
    for(int i=0; i<n; i++){
        if(i==spos)
            continue;
        if(arr[i]%10!=0)
            while(arr[i]%10!=0)
                arr[i]++;
        sum+=arr[i];
    }
    sum+=arr[spos];
    cout<<sum;
    return 0;
}