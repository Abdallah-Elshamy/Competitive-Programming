#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main()
{
    int temp, m,n;
    vector <int> nums;
    cin >>n;
    cin>>m;

    for(int k=0 ; k < m ; k ++)
    {
        cin>>temp;
        nums.push_back(temp);
    }
    sort(nums.begin(),nums.end());
    int minimum = nums[m-1];
    for (int i =0; i<nums.size();i++)
    {
        for (int k= i+n-1; k<nums.size();k++)
        {
            if((nums[k]-nums[i]) < minimum) minimum = nums[k]-nums[i];
        }
    }
    cout<<minimum;



    return 0;

}
