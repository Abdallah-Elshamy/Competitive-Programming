#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    set <char> letters;
    string line;
    getline(cin, line);
    for(int i =0; i<line.length(); i++)
    {
        if(line[i] >='a' && line[i] <='z') letters.insert(line[i]);
    }
    cout<<letters.size();

    return 0;
}
