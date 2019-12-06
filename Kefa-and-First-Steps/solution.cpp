#include <iostream>

using namespace std;

int main()
{
    int n , tmp , ans = 0 , counter = 0 , last;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>tmp;
        if(i == 0)
        {
            counter += 1;
            last = tmp;
            continue;
        }
        if(tmp >= last)
        {
            counter += 1;
            last = tmp;
        }
        else
        {
            if(counter > ans) ans = counter;
            counter = 1;
            last = tmp;
        }
    }

    if(counter > ans) ans = counter;

    cout << ans;
    return 0;
}
