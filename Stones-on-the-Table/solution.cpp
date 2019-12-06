#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, counter = 0;
    string s;

    cin>>n;
    cin>>s;

    for(int i=1;i<n;i++)
    {
        if(s[i-1] == s[i]){
            counter++;
        }
    }
    cout<< counter<<endl;

    return 0;
}
