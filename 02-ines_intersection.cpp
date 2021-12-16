#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
struct point{
    int x,y;
};
int orintation(point p1,point p2,point p3){
    int val=(p2.y-p1.y)*(p3.x-p2.x)-(p3.y-p2.y)*(p2.x-p1.x);
    if(val<0)
    return -1;
    return (val>0)?1:0;
}
bool validprojection(int a,int b,int c,int d){
    if(a>b)
    swap(a,b);
    if(c>d)
    swap(c,d);
    return max(a,c)<=min(b,d);

}
bool intersect(point p1,point p2,point p3,point p4){
    int a=orintation(p1,p2,p3);
    int b=orintation(p1,p2,p4);
    int c=orintation(p3,p4,p1);
    int d=orintation(p3,p4,p2);
    if(a!=b&&c!=d)return true;
    if(a==0 && d==0){
        if(validprojection(p1.x,p2.x,p3.x,p4.x)&&validprojection(p1.y,p2.y,p3.y,p4.y))return true;
    }
    return false;

}
int main(){
    point p1={10,0},p2={0,10},p3={0,0},p4={10,10};
    cout<<intersect(p1,p2,p3,p4)<<endl;
    return 0;
    
}
