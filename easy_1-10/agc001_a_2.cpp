#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    long long product{1};
    for(int i=a; i<=b; i++){
        product=product*i;
    }
    cout<<product;
    return 0;
    /*like epudu two num range lo 0 unte its product is always zero
    like -1 0 1 so adhi oka condition, another condition is if two num is positive then the product of numbers between them is also positive
    like 3 5, and last condition if both are negative then like -3 -1, -1x-2x-3 is negative, and -1 -4 (-1*-2*-3*-4)= 24, is positive because there are even number of negative numbers between them
    so nuvu aa two numbers ni subtract chesi if it is even it is positive and if it is odd its negative, like (-4-(-1)+1)=3*/
}   