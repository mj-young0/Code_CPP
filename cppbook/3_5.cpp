#include <iostream>
#include <cmath>
using namespace std;
const double TINY_VALUE = 1e-10;
double tsin(double x)
{
    double t = x;
    double g = 0;
    int n = 1;
    do
    {
        g += t;
        n++;
        t = -t * x * x / (2 * n - 1) / (2 * n - 2);
    } while (fabs(t > TINY_VALUE));
    return g;
}
int main(){
    double k,r,s;
    cout<<"请输入r:";
    cin>>r;
    cout<<"请输入s:";
    cin>>s;
    if(r*r<=s*s){
        k=sqrt(tsin(r)*tsin(r)+tsin(s)*tsin(s));
    }else{
        k=1/2*tsin(r*s);
    }
    cout<<"k="<<k;
    return 0; 
}