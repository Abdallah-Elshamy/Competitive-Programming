#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string l = "I love", h= "I hate",s = "";
    int n;

    cin>>n;

    for(int i=1 ; i<=n ; i++)
    {
        if((i%2!=0) && (i != n)){
            cout<<h + " that ";
        }
        else if ((i%2 == 0) && (i != n)){
            cout<<l + " that ";
        }
        else if ((i%2!=0) && (i == n)){
            cout<<h + " it";
        }
        else if ((i%2==0) && (i == n)){
            cout<<l + " it";
        }

    }

    return 0;
}
