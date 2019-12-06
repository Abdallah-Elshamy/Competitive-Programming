#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2)
{
  return abs(p2.second-p2.first) < abs(p1.second-p1.first);
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,ans=0,x,y;
    //freopen("","r",stdin);
	  cin>>n>>x>>y;
    vector<pair<int,int>>pairs(n);
    for(int i=0;i<n;i++)
      cin>>pairs[i].first;

    for(int i=0;i<n;i++)
      cin>>pairs[i].second;

    sort(pairs.begin(),pairs.end(),cmp);
    for(int i=0;i<n;i++)
    {
      if(pairs[i].first == pairs[i].second)
      {
        ans+=pairs[i].first;
        if(x>y) x--;
        else y--;
      }
      else if(pairs[i].first > pairs[i].second)
      {
        if(x)
        {
          ans+=pairs[i].first;
          x--;
        }
        else
        {
          y--;
          ans+=pairs[i].second;
        }
      }
      else
      {
        if(y)
        {
          ans+=pairs[i].second;
          y--;
        }
        else
        {
          x--;
          ans+=pairs[i].first;
        }
      }
    }
    cout<<ans;

    return 0;
}
