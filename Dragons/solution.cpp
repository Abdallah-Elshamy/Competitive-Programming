#include <iostream>
#include <map>
using namespace std;

int main()
{
    int s,n,temp1, temp2;
    bool can_win=1;
    map <int,int> dragons;
    cin>>s>>n;
    for(int i =0 ; i<n ;i++)
    {
        cin>>temp1>>temp2;
        if(dragons.find(temp1) != dragons.end()) dragons[temp1] += temp2;
        else dragons[temp1] = temp2;
    }
    for(map<int,int>::iterator it = dragons.begin() ; it != dragons.end() ; it ++)
    {
        if((it->first) >= s)
        {
            can_win=0;
            break;
        }
        else
        {
            s+= it->second;
        }
    }
    if(can_win == 1) cout<<"YES";
    else cout<<"NO";
}
