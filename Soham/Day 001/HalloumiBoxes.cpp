#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,x,y=-1;
    bool flag=0;
    cin>>n;
    cin>>k;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
        if(i>0&&x<y)
        flag=1;
        y=x;
    }
    if(!flag||k>1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
        solve();
}