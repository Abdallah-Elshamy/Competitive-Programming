#include <iostream>
using namespace std;

int main()
{
    int n, m,temp, members=0;
    bool odd_is_different = 1;
    cin>>n>>m;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>temp;
        if(5-temp >= m ) members++;
    }
    cout<<members/3;
}
