#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {   long long int a,b,c,sum=0;
        vector<long long int > v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        a=v[0];b=v[1];c=v[2];
        if(v[0]==v[1] && v[1]==v[2])
            sum=0;
        else
        {
        if(v[0]!=v[1])
            a=++v[0];
        else if(v[0]==v[1] && v[2]>v[1])
            a=++v[0],b=++v[1];
        if(a<v[1])
            b=--v[1];
        if(v[2]>b)
            c=--v[2];

        sum=abs(a-b)+abs(b-c)+abs(a-c);
        }
        //cout<<a<<" "<<b<<" "<<c<<endl;
        cout<<abs(sum)<<endl;
    }
}
