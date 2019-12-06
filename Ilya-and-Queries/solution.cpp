#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m, l, r,counter= 0;
    bool all_zeros = true;
    string text;
    int values[100000];
    cin>>text;
    int n = text.length();
    values[0] = 0;
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(text[i] == text[i+1])
        {
            counter++;
            all_zeros = false;
        }
        values[i+1] = counter;
    }
    cin>>m;
    for (int i = 0; i < m; ++i)
    {
        if(all_zeros)
        {
            cout<<0<<endl;
        }
        else
        {
            cin>>l >>r;
            cout<<values[r-1] - values[l-1]<<endl;
        }
    }
    return 0;
}
