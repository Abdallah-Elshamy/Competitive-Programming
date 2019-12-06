#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, temp,programmer,sportsman,mathematician;
    cin>>n;
    vector <int> students,Programmer,Sportsman,Mathematician;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>temp;
        students.push_back(temp);
        if(temp == 1) Programmer.push_back(i);
        if(temp == 2) Mathematician.push_back(i);
        if(temp == 3) Sportsman.push_back(i);
    }
    mathematician = count(students.begin(),students.end(), 2);
    programmer = count(students.begin(),students.end(), 1);
    sportsman = count(students.begin(),students.end(), 3);
    n= min(min(mathematician,programmer),sportsman);
    cout<<n<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<Programmer[i]+1<<" "<<Mathematician[i]+1<<" "<<Sportsman[i]+1<<endl;
    }
}
