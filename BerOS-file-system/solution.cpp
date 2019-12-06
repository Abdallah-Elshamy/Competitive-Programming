#include <iostream>
#include <String>
using namespace std;

int main()
{
    string phrase,output;
    int flag=0;
    cin >>phrase;
    for(int i=0; i<phrase.length();i++)
    {
        if(phrase[i]=='/')
        {
            flag++;
        }
        else
    {
        flag=0;
        output+=phrase[i];
    }
        if(flag==1)
            output+='/';
        else
            continue;
    }
    if((output[output.length()-1]=='/') && (output.length()>1) )
    {
        for(int i=0;i<(output.length()-1);i++)
            cout << output[i];
    }
    else
        cout << output ;
    return 0;
}
