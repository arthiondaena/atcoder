//array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a{}, b{}, m{}, alow{}, blow{};
    cin>>a>>b>>m;
    int aarr[a], barr[b], marr[m];
    for(int i=0; i<a; i++){
        cin>>aarr[i];
        if(i==0)
            alow=aarr[i];
        if(alow>aarr[i])
            alow=aarr[i];
    }
    for(int i=0; i<b; i++){
        cin>>barr[i];
        if(i==0)
            blow=barr[i];
        if(blow>barr[i])
            blow=barr[i];
    }
    int wd=alow+blow;
    for(int i=0; i<m; i++){
        int x, y, c;
        cin>>x>>y>>c;
        int total=aarr[x-1]+barr[y-1]-c;
        if(total<wd)
            wd=total;
    }
    cout<<wd;
    return 0;
}