#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    float grades_needed;
    float sum=0;
    vector<int> grades;
    int n , temp, tests =0;
    cin>>n;
    for(int i = 0; i<n;i++)
    {
        cin>>temp;
        grades.push_back(temp);
    }
    for(int i = 0; i<n;i++)
    {
        sum += grades[i];
    }
    int average = round(sum/n);
    sort(grades.begin(),grades.end());
    if(average == 5 ) cout<<0;
    else
    {
        grades_needed = 4.5*n - sum;
        for(int i = 0; i<n;i++)
        {
            if(grades_needed <= 0) break;
            tests++;
            grades_needed -= 5 - grades[i];
        }
        cout<<tests;
    }


    return 0;
}
