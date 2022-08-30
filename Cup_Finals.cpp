#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        int x,y,d;
        cin>>x>>y>>d;
        if((x-y)>d)
        cout<<"NO"<<endl;
        else if((y-x)>d)
        cout<<"No"<<endl;
        else 
        cout<<"YES"<<endl;

    }
    return 0;
}