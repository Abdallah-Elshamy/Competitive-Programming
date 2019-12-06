#include <iostream>
using namespace std;

int main()
{
    int n, temp,even=0,odd=0, even_index ,odd_index;
    bool odd_is_different = 1;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>temp;
        if(temp %2 == 0) {even++; even_index = i;}
        else {odd++; odd_index = i;}
    }
    if(even<odd) odd_is_different=0;
    if(odd_is_different) cout<<odd_index+1<<endl;
    else cout<<even_index+1<<endl;
}
