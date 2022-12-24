#include <iostream>

using namespace std; 

int main(){
  int a, b;
  cin>>a>>b;
  int out=1, ans{};
  while(out<b){
    --out;
    out+=a;
    ans++;
  }
  cout<<ans;
  return 0;
}