#include <iostream>
#include <vector>
#include<cmath>
using namespace std;


int main()
{
int temp , n,x=0,y=0,z=0;
vector <int> coordinates;
cin >>n ;

for(int k=0 ; k < 3*n ; k ++){
cin>>temp;
coordinates.push_back(temp);
}

for(int k=0 ; k < 3*n ; k += 3){
x += coordinates[k];
}
for(int k=1 ; k < 3*n ; k += 3){
y += coordinates[k];
}
for(int k=2 ; k < 3*n ; k += 3){
z += coordinates[k];
}
if(x==0 && y==0 && z==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


    return 0;

}
