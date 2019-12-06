#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string name;
    int  n , holder , cities[100000];
    //freopen("","r",stdin);
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>holder;
        cities[i] = holder;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0) cout<<cities[1]-cities[0]<<' '<<cities[n-1]-cities[0]<<'\n';
        else if(i == n-1) cout<<cities[n-1]-cities[n-2]<<' '<<cities[n-1]-cities[0]<<'\n';
        else
        {
            if(cities[i]-cities[i-1] <= cities[i+1]-cities[i]) cout<<cities[i]-cities[i-1]<<' ';
            else cout<<cities[i+1]-cities[i]<<' ';
            if(cities[i]-cities[0] >= cities[n-1]-cities[i]) cout<<cities[i]-cities[0]<<'\n';
            else cout<<cities[n-1]-cities[i]<<'\n';

        }

    }


    return 0;
}
