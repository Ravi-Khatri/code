#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;cin>>t;
    while(t--)
    {
        long long int x,y,a,b;
        cin>>x>>y>>a>>b;
        if(!((y-x)%(a+b)))
            cout<<(y-x)/(a+b) <<endl;
        else
            cout<<-1<<endl;
    }
}
