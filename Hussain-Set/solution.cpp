#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,holder,start=0;
    vector<ll>value;

    //freopen("","r",stdin);

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>holder;
        value.push_back(holder);
    }
    sort(value.begin(),value.end());
    stack<ll> sorted_items;
    queue<ll> divided_items;
    for(int i=0 ; i<n;i++) sorted_items.push(value[i]);
    while(m--)
    {
        ll tmp;
        cin>>holder;
        for(;start<holder;start++)
        {
          if(divided_items.empty())
          {
            tmp = sorted_items.top();
            sorted_items.pop();
            divided_items.push(tmp/2);
          }
          else if(sorted_items.empty())
          {
            tmp=divided_items.front();
            divided_items.pop();
            divided_items.push(tmp/2);
          }
          else if(sorted_items.top()>=divided_items.front())
          {
            tmp = sorted_items.top();
            sorted_items.pop();
            divided_items.push(tmp/2);
          }
          else
          {
            tmp=divided_items.front();
            divided_items.pop();
            divided_items.push(tmp/2);
          }
        }
        cout<<tmp;
        if(m)cout<<'\n';
    }

    return 0;
}
