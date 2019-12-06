#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string name;
    int  n , pos;
    //freopen("","r",stdin);
    cin>>n>>pos;
    for(int i = n%6 ; i > 0 ; i--)
    {
        if(i%2 == 0)
        {
            if(pos==2) pos=1;
            else if(pos==1) pos=2;
        }
        else
        {
            if(pos==0) pos=1;
            else if(pos==1) pos=0;
        }
    }


    cout<<pos;

    return 0;
}
