#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,i;
    string word;
    cin >> n;
    for (i=0;i<n;++i)
    {
        cin>>word;
        if(i==(n-1))
        {
            if(word.length() > 10)
            cout << word[0] << word.length()-2 << word[word.length()-1];
            else
            cout << word;
        }
        else
        {
            if(word.length() > 10)
            cout << word[0] << word.length()-2 << word[word.length()-1]<<endl;
            else
            cout << word <<endl;
        }}
    return 0;
}
