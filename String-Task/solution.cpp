#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
string word ,ans = "" ;
cin>>word;


for(int n = 0 ; n< word.length() ;n++){
    word[n] = tolower(word[n]);
}

for(int i = 0 ; i< word.length() ;i++){
   if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u'&& word[i] != 'y'){
    ans = ans + "." + word[i];
   }
}


cout<<ans<<endl;

    return 0;

}
