//array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{}, counter{};
    cin>>n;
    for(int i=n; i>1; i++){
        for(int j=2; j<i; j++){
            if(i%j==0)
                counter++;
            if(counter==1)
                break;
        }
        if(counter==0){
            cout<<i;
            break;
        }
        counter=0;
    }
    
}