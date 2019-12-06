#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n , holder , M, m,counter,ans=0;
    vector<int> nums;
    //freopen("","r",stdin);
    cin>>n;
    for(int i =0 ; i<n ; i++)
    {
        cin>>holder;
        nums.push_back(holder);
    }
    for(int i =0 ; i<n ; i++)
    {
        counter =1;
        M = nums[i];
        m =nums[i];
        if(n-i > ans){
        for(int k = i+1 ;k<n;k++)
        {
            if(nums[k]<m) m = nums[k];
            if(nums[k]>M) M = nums[k];
            if(M-m <=1)
            {
                counter++;
                if(k ==n-1)
                {
                if(ans<counter) ans =counter;
                }
            }
            else
            {
                if(ans<counter) ans =counter;
                break;
            }
        }
        }
    }

    cout<<ans;

    return 0;
}
