#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,holder,next;
    set<int> nums;
    //freopen("","r",stdin);
    cin>>n;
    next = n;
    for(int i=0 ; i<n; i++)
    {
        cin>>holder;
        if(holder < next)
        {
            cout<<"\n";
            nums.insert(holder);
        }
        else
        {
            cout<<next<<" ";
            next--;
            while(nums.find(next) != nums.end())
            {
                cout<<next<<" ";
                next--;
            }
            if(i != n-1) cout<<"\n";
        }
    }

    return 0;
}s
