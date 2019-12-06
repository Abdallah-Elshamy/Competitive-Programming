#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, d,temp,duration = 0,jokes;
    cin>>n>>d;
    vector <int> songs;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>temp;
        songs.push_back(temp);
        duration += temp;
    }
    duration += (n-1)*10;
    if(duration > d) cout<<-1;
    else
    {
        jokes = (n-1)*2 + (d-duration)/5;
        cout<<jokes<<endl;
    }
}
