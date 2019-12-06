#include <iostream>

using namespace std;

int main()
{
    int n,m=0;
    cin >> n >> m;
    int small = m;
    if(small > n) small = n;
    if(small%2 ==0)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0;
}
