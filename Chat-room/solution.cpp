#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
using namespace std;

int main()
{
int h=0, e=0, l=0 , o= 0;
int h_i=0, e_i=0, l_i=0 , o_i= 0, i= 0;
string s;

cin >> s;

for(int k=0 ; k < s.length() ; k ++){
if(s[k] == 'h'){h_i = k ; h++; break; };
}

for(int k= h_i ; k < s.length() ; k ++){
if(s[k] == 'e'){e_i = k ; e++; break; };
}
for(int k=e_i ; k < s.length() ; k ++){
if(s[k] == 'l'){l_i = k ; l++; break; };
}

for(int k=l_i +1 ; k < s.length() ; k ++){
if(s[k] == 'l'){i=k ; l++; break; };
}

for(int k=i ; k < s.length() ; k ++){
if(s[k] == 'o'){o_i = k ; o++; break; };
}


if(h>0 && e>0 && l>1 && o>0 && o_i>l_i && i>e_i && e_i>h_i && l_i >e_i) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


    return 0;

}
