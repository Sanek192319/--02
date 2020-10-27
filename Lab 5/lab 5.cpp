#include <iostream>
using namespace std;
int main()
{
    double b,c,x;
    cin>>b;
    c=(b-(int)b)*1000;
    x=(int)b/1000;
    cout<<c+x;
    return 0;
}
