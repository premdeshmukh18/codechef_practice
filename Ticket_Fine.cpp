#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,p,q;
        cin>>x>>p>>q;
        cout<<((p-q)*x)<<endl;
    }
    return 0;
}