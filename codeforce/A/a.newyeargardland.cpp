#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if( arr[0] + arr[1] >= arr[2])
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}
