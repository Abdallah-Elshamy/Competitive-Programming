#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,index_symbols,max_symbols=0,index_depth,max_depth=0,holder,counter=0,first_index;
    stack<int>index_opening;

    //freopen("","r",stdin);

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>holder;
        counter++;
        if(holder==2)
        {
            int opening = index_opening.top();
            index_opening.pop();
            if( (counter-opening) > max_symbols)
            {
                max_symbols=counter-opening+1;
                index_symbols=opening;
            }

        }
        else
        {
            if(index_opening.empty()) first_index=counter;
            index_opening.push(counter);
            if(max_depth<index_opening.size())
            {
                max_depth=index_opening.size();
                index_depth=counter;
            }
        }

    }

    cout<<max_depth<<' '<<index_depth<<' '<<max_symbols<<' '<<index_symbols
;

    return 0;
}
