#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

int main()
{
int temp,x = 0,y = 0;
vector <int> r1, r2, r3, r4, r5;


for(int k=0 ; k < 5 ; k ++){
cin>> temp;
r1.push_back(temp);
}
for(int k=0 ; k < 5 ; k ++){
cin>> temp;
r2.push_back(temp);
}
for(int k=0 ; k < 5 ; k ++){
cin>> temp;
r3.push_back(temp);
}
for(int k=0 ; k < 5 ; k ++){
cin>> temp;
r4.push_back(temp);
}
for(int k=0 ; k < 5 ; k ++){
cin>> temp;
r5.push_back(temp);
}
for(int k=0 ; k < 5 ; k ++){
if (r1[k] != 0 ){
x=k;
y=1;
}
}
for(int k=0 ; k < 5 ; k ++){
if (r2[k] != 0 ){
x=k;
y=2;}
}
for(int k=0 ; k < 5 ; k ++){
if (r3[k] != 0 ){
x=k;
y=3;}
}
for(int k=0 ; k < 5 ; k ++){
if (r4[k] != 0 ){
x=k;
y=4;}
}
for(int k=0 ; k < 5 ; k ++){
if (r5[k] != 0 ){
x=k;
y=5;
}
}

cout<<abs(3-y)+abs(2-x)<<endl;

    return 0;

}
