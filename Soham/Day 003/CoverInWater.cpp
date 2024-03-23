#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,consec=0,count=0,i;
    string str;
    bool flag=0;
    cin>>n;
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='.')
        {
            consec++;
            count++;
        }
        else
            consec=0;
        if(consec>2)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    cout<<"2"<<endl;
    else
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}