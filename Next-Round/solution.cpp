#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int  n , k,holder , scores[50] , zero=51;
    bool found= 1;
    //freopen("","r",stdin);
    cin>>n>>k;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>holder;
        scores[i] = holder;
        if(holder==0 && found) {zero=i; found = 0;}
    }
    if(zero<=k) cout<<zero;
    else
    {
        for(int i = k ; i < n ; i++)
        {
            if(scores[i] == scores[i-1]) k++;
            else break;
        }
        cout<<k;
    }


    return 0;
}
