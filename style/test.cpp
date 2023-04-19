#include <iostream>
using namespace std;
double areacalc(double r){

    double area=r*4;

    return area;

}

int main(){
    double x;
    cin>>x;
    double res=areacalc(x);
    cout<<"area is "<<res;
}