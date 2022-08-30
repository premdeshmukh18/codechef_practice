#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b & a<c)
        cout<<"Draw"<<endl;
        else if(b<c & b<a)
        cout<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl;
        
    }
    return 0;
}