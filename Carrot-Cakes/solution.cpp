#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t,k,d;
    //freopen("","r",stdin);
    cin>>n>>t>>k>>d;
    float cakes_by_1_oven = k*((t+d)/t);
    if (cakes_by_1_oven < n) cout<<"YES";
    else cout<<"NO";
    return 0;
}
