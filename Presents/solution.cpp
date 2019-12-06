#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
int n ,temp;
vector <int> v,ans;


cin >> n;
for(int k=0 ; k < n ; k ++){
cin>> temp;
v.push_back(temp) ;
ans.push_back(temp);
}

for(int k=0 ; k < v.size() ; k ++){
ans[(v[k] -1)] = k +1;
}

for(int k=1 ; k < ans.size() +1 ; k ++){
cout<<ans[k-1]<<" ";
}


    return 0;

}
