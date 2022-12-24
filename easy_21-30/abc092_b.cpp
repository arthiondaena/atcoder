//array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{}, d{}, x{}, days{};
    cin>>n>>d>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        days+=d/arr[i];
        if(d%arr[i]!=0)
            days++;
    }
    int ans=days+x;
    cout<<ans; 
    return 0;
    
}