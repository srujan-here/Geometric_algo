#include<bits/stdc++.h>
using namespace std;
struct point
{
   int x,y;
};
int orintation(point p1,point p2,point p3){
    int val=(p2.y-p1.y)*(p3.x-p2.x)-(p3.y-p2.y)*(p2.x-p1.x);
    if(val<0)
    return -1;
    return (val>0)?1:0;
}

int main(){
    point p1={1,4},p2={2,5},p3={3,10};
    int m=orintation(p1,p2,p3);
    if(m==0)
    cout<<"colinear"<<endl;
    else if(m>0)
    cout<<"clock wise"<<endl;
    else
    cout<<"anti clock wise"<<endl;

}