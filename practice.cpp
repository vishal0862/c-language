#include <iostream>
using namespace std;

int main() {
    int a;
    float b,total;
    cin>>a>>b;
    float s=a+0.50;
    if(a%5==0 && s<b)
        total=b-a;
    else
        total=b;
    cout<<total;
    return 0;
}
