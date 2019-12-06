#include <iostream>
#include <string>
using namespace std;

int main()
{
    string temp1, temp2;
    cin>>temp1;
    temp2 = temp1;
    int balance = stoul(temp1);
    (temp1).erase((temp1).length()-1,1);
    (temp2).erase((temp2).length()-2,1);
    if(balance>0) cout<<balance;
    else
    {
        if(temp1.length() == 1) cout<<0;
        else
        {
            int case1 = stoul(temp1);
            int case2 = stoul(temp2);
            if(case1 > case2) cout<<case1;
            else cout<<case2;
        }
    }


}
