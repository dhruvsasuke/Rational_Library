//
// Created by Dhruv Krishna on 01-06-2018.
//
#include <iostream>


#ifndef RATIONAL_RATIONAL_H
#define RATIONAL_RATIONAL_H
#endif //RATIONAL_RATIONAL_H

using namespace std;

class rational{
private:
    int num=0,den=1;
    friend ostream& operator<<(ostream& os, const rational& r);
    //friend istream& operator>>(istream& in, const rational& input);
public:
    virtual ~rational() {}
    int getNum();
    void setNum(int num);
    int getDen();
    void setDen(int den);
    int gcd(rational x);
    rational simplify();
    inline rational operator+(rational x);
    inline rational operator-(rational x);
    inline rational operator*(rational x);
    inline rational operator/(rational x);
    inline rational operator=(rational x);
    bool operator==(rational x);
    bool operator>(rational x);
    bool operator<(rational x);
    bool operator<=(rational x);
    bool operator>=(rational x);
    explicit operator const int() const {return (int)(num/den);}
    explicit operator const long() const {return (long)(num/den);}
    explicit operator const long long() const {return ((long long)num/den);}
    explicit operator const float() const {return ((float)num/den);}
    explicit operator const double() const {return ((double)num/den);}
};

int rational::getNum() {
    return num;
}

void rational::setNum(int num) {
    rational::num=num;
}

int rational::getDen(){
    return den;
};

void rational::setDen(int den) {
    rational::den=den;
}

int rational::gcd(rational x){
    int a,b,c;
    a=x.num; b=x.den;
    if(x.num > x.den) {
        c = a;
        a = b;
        b = c;
    }
    while(a) {
        c = a;
        a = b % a;
        b = c;
    }
    return b;
}

rational rational::simplify() {
    int a=gcd(*this);
    this->num=(this->num/a);
    this->den=(this->den/a);
    return *this;
}

rational rational::operator+(rational x) {
    rational tmp;
    int n,d;
    n=(this->num*x.getDen())+(this->den*x.getNum());
    d=(this->den*x.getDen());
    tmp.setNum(n);
    tmp.setDen(d);
    return tmp.simplify();
}

rational rational::operator-(rational x) {
    rational tmp;
    int n,d;
    n=(this->num*x.getDen())-(this->getDen()*x.getNum());
    d=(this->getDen()*x.getDen());
    tmp.setNum(n);
    tmp.setDen(d);
    return tmp.simplify();
}

rational rational::operator*(rational x) {
    rational tmp;
    int n,d;
    n=(this->getNum()*x.getNum());
    d=(this->getDen()*x.getDen());
    tmp.setNum(n);
    tmp.setDen(d);
    return tmp.simplify();
}

rational rational::operator/(rational x) {
    rational tmp;
    int flag=x.num;
    x.setNum(x.den);
    x.setDen(flag);
    return (*this)*x;
}

rational rational::operator=(rational x) {
    this->setNum(x.getNum());
    this->setDen(x.getDen());
    return *this;
}

bool rational::operator==(rational x) {
    rational tmp;
    tmp=(*this/x);
    return tmp.den == 1 && tmp.num == 1;
}

bool rational::operator>(rational x) {
    float fr1,fr2;
    fr1=(this->num)/(this->den);
    fr2=(x.num/x.den);
    return fr1>fr2;
}

bool rational::operator<(rational x) {
    float fr1,fr2;
    fr1=(this->getNum())/(this->getDen());
    fr2=(x.getNum()/x.getDen());
    return fr1<fr2;
}

bool rational::operator<=(rational x) {
    return !(*this>x);
}

bool rational::operator>=(rational x){
    return !(*this<x);
}

ostream& operator<<(ostream& os, const rational& r) {
    if(r.den==1||r.num==0){
        os<<r.num;
        return os;
    }
    else
        os<<r.num<<'/'<<r.den;
    return os;
}

istream& operator>>(istream& in, rational& input) {
    int n,d;
    cout<<"Enter Numerator";
    in>>n;
    input.setNum(n);
    cout<<"Enter Denominator";
    in>>d;
    input.setDen(d);
    return in;
}

