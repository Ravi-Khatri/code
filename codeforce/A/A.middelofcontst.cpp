#include<iostream>
using namespace std;
int main()
{
    int start_hour,start_minut,end_hour,end_minut;
    int ans_hour,ans_minut;
    char c;
    cin>>start_hour>>c>>start_minut;
    cin>>end_hour>>c>>end_minut;
    if(start_hour!=end_hour) ans_hour=(end_hour+start_hour)/2;
    else ans_hour=start_hour;
    if(start_minut!=end_minut)
        ans_minut=(end_minut+start_minut)/2;
    else ans_minut=start_minut;
    if(ans_minut==0)
    cout<<ans_hour<<':'<<"30"<<endl;
    else
        cout<<ans_hour<<':'<<ans_minut<<endl;
}
