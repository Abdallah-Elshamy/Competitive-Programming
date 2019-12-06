#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,temp,taxies=0,one_count=0,two_count=0,three_count=0,four_count=0;
    cin>>n;
    for(int i = 0 ; i <n; i++)
    {
        cin>>temp;
        if(temp == 1) one_count++;
        if(temp == 2) two_count++;
        if(temp == 3) three_count++;
        if(temp == 4) four_count++;
    }
    taxies += four_count;
    if(three_count <= one_count)
    {
        taxies += three_count;
        one_count -= three_count;
    }
    else
    {
        taxies += three_count;
        one_count =0;
    }

    if(two_count %2 == 0) taxies+= (two_count/2);
    else
    {
        taxies+= (two_count/2);
        if(one_count == 0) taxies += 1;
        else
        {
            if (one_count >=2)
            {
                taxies += 1;
                one_count -= 2;
            }
            else
            {
                taxies += 1;
                one_count = 0;
            }
        }

    }
    while(one_count>0)
    {
        taxies += 1;
        one_count -=4;
    }
    cout<<taxies;

}
