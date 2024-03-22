#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,ans=0,y=0;
    cin>>n;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        ans=ele-y>ans?ele-y:ans;
        y=ele;
    }
    ans=(x-y)*2>ans?(x-y)*2:ans;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}