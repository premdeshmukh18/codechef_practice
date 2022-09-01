#include<iostream>
using namespace std;
 
int eg(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=10 & arr[i]<=60)
        count++;

    }
    return count;

}


int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[100];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<eg(arr,n)<<endl;

    }
}