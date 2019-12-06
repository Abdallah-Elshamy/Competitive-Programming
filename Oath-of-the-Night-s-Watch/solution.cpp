#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string name;
    int  n , holder , steward[100000];
    //freopen("","r",stdin);
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>holder;
        steward[i] = holder;
    }
    if(n == 1 || n == 2) cout<<0;
    else
    {
        sort(steward , steward+n);
        int low = steward[0];
        int high =  steward[n-1];
        int counter = 2;
        for(int i = 1 ; i < n ; i++)
        {
            if(steward[i] == low) counter++;
            else break;
        }
        for(int i = n-2 ; i >= 0 ; i--)
        {
            if(steward[i] == high) counter++;
            else break;
        }
        if(n-counter > 0) cout<<n-counter;
        else cout<<0;
    }

    return 0;
}
