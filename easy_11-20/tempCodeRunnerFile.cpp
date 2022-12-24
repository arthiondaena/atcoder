#include<iostream>
using namespace std;

int main(){
    int arr[7]{100, 50, 20, 10, 5, 2, 1};
    int money;
    cin>>money;
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" notes are : "<< money/arr[i]<<'\n';
        money%=arr[i];
    }
    return 0;
}