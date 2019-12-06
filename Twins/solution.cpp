#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

bool cmp(int j,int i )
{
	return i<j;
}

int main()
{
int x, y, sum1 =0, sum2 = 0, ans = 0;
vector <int> v ;

cin >> x;

for(int i=0 ; i<x ; i ++){
cin>>y;
v.push_back(y);
}

sort(v.begin(), v.end(),cmp);


for(int k=0 ; k<v.size() ; k ++){
sum2 += v[k];
}


for(int n=0 ; n<v.size() ; n ++){
sum1 += v[n];
sum2 -= v[n];
if(sum1>sum2){
ans = n;
break;
}
}

cout<<ans+1<<endl;


    return 0;

}
