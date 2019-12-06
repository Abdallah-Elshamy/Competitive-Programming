#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    bool flag = 0;
    cin>>x1>>y1>>x2>>y2;
    if(x1 == x2)
    {
        y3=y2;
        y4=y1;
        x3=x2 - (y1-y2);
        x4=x1 - (y1-y2);
    }
    else if(y1 == y2)
    {
        x3=x2;
        x4=x1;
        y3=y2 - (x1-x2);
        y4=y1 - (x1-x2);
    }
    else if(fabs(x2-x1)== fabs(y1-y2))
    {
        x3 = x2;
        y3 = y1;
        x4 = x1;
        y4 = y2;
    }
    else flag = 1;

    if(flag == 1) cout<<-1;
    else cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
}
