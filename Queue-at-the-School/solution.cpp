#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n , t;
    cin>>n>>t;
    string q ;
    cin>>q;
    for(int i = 0 ; i <t; i++)
    {
        for(int k =0 ; k<(q.length()-1) ; k++)
        {
            if(q[k]=='B' && q[k+1] == 'G')
            {
            q[k] = 'G';
            q[k+1] = 'B';
            k++;
            }
        }
    }
    cout<<q;

}
