#include <iostream>
using namespace std;
int main()
{
    double a,b,c,d;
    bool l=0;
    cin>>a>>b>>c>>d;
if((a<=c) && (b<=d) ){l=1;}
else if((a<=d) && (b<=c)){l=1;}
if(l){cout<<"Можливо вписати перший прямокутник у другий";}
else{cout<<"Неможливо вписати перший прямокутник у другий";}
    return 0;
}
