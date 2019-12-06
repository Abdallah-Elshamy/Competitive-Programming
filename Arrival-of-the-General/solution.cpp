#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
    vector <int> row;
    int n,i,x,z,Max,Min,max1,min2,min1,counter1=0,counter2=0,temp;
    cin >>n;
    z=n;
    while(z--)
    {
        cin>>x;
        row.push_back(x);
    }
     Max = *(max_element(row.begin(),row.end()));
    max1 = max_element(row.begin(),row.end())-row.begin();
    for(i=max1;i>0;i--)
    {
        temp=row[i];
        row[i]=row[i-1];
        row[i-1]=temp;
        counter1++;
    }
    reverse(row.begin(),row.end());
    Min = *(min_element(row.begin(),row.end()));
    min1 = min_element(row.begin(),row.end())-row.begin();
    for(i=min1;i>0;i--)
    {
        temp=row[i];
        row[i]=row[i-1];
        row[i-1]=temp;
        counter2++;
    }
    cout << counter1 + counter2 ;

    return 0;
}
