#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        int x,m,d;
        cin>>x>>m>>d;
        cout<<min((x*m),(x+d))<<endl;
        
    }
    return 0;
}