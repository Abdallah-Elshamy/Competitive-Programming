#include <iostream>

using namespace std;

int main()
{
    int n , ax, ay , bx, by , cx ,cy;
    cin>>n;
    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;
    bool same_quarter = false;

    if (bx > ax && cx > ax)
    {
        if(by > ay && cy > ay) same_quarter = true;
        if(by < ay && cy < ay) same_quarter = true;
    }
    if (bx < ax && cx < ax)
    {
        if(by > ay && cy > ay) same_quarter = true;
        if(by < ay && cy < ay) same_quarter = true;
    }

    if(same_quarter) cout<<"YES";
    else cout<<"NO";


    return 0;
}
