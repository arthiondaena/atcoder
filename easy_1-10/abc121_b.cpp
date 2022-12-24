#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{}, m{}, c{};
    cin>>n>>m>>c;
    int b[m];
    for(int i=0; i<m; i++)
        cin>>b[i];
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin>>a[i][j];
    }
    int count{}, sum{};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum+=b[j]*a[i][j];
        }
        sum+=c;
        if(sum>0)
            count++;
        sum=0;
    }
    cout<<count;
    return 0;
    
}