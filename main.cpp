#include <iostream>
#include "rational.h"

using namespace std;

int main() {
    rational ob1,ob2;
    //ob1.setNum(1); ob1.setDen(2);
    //ob2.setNum(3); ob2.setDen(4);
    cin>>ob1>>ob2;
    cout<<ob1+ob2<<" "<<ob1-ob2<<" "<<ob1*ob2<<" "<<ob1/ob2<<" "<<(ob1==ob2)<<(ob1>ob2)<<" "<<(ob1.simplify());
    return 0;
}