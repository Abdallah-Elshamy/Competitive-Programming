#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int x,flag = 0;
int arr[] = {4,7,44,47,74,77,447,474,477,744,747,777,444,774};

cin >> x;

for(int k=0 ; k < 14 ; k ++){
if(x % arr[k] == 0) flag++;
}


if(flag>0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


    return 0;

}
