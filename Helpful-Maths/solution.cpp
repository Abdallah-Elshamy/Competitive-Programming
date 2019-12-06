#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;



int main()
{
string str ,ans = "";
stringstream ss;
int x;
vector<int> v ;
cin>>str;
ss<<str;

for(int i=1 ; i<str.length() ; i += 2){
str[i] = ' ' ;
}
while (ss>>x){
v.push_back(x);
}



sort(v.begin(), v.end());
 ans += to_string(v[0]);

for(int k=1 ; k<v.size() ; k ++){
ans += "+";
ans += to_string(v[k]);
}


cout<<ans<<endl;


    return 0;

}
