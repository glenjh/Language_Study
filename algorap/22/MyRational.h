#ifndef _MYRATIONAL_H_
#define _MYRATIONAL_H_
#include <iostream>
using namespace std;
class myRational
{
public:
    myRational(long num=0, long den=1);
    
    myRational(const myRational &rat);


    long getNumerator() const;
    long getDenominator() const;
    myRational reciprocal() const;

    myRational operator + (const myRational& a);
    myRational operator + (long value);
    friend myRational operator +(long value, myRational a);

    myRational operator - (const myRational& a);
    myRational operator - (long value);
    friend myRational operator -(long value, myRational a);

    myRational operator * (const myRational& a);
    myRational operator * (long value);
    friend myRational operator *(long value, myRational a);
    

    myRational operator / (const myRational& a);
    myRational operator / (long value);
    friend myRational operator /(long value, myRational a);

    myRational operator++();
    myRational operator++(int);
    myRational operator--();
    myRational operator--(int);

    myRational operator-();

    bool operator <(const myRational& a) const;
    bool operator <(long value) const;

    bool operator <=(const myRational& a) const;
    bool operator <=(long value) const;

    bool operator >(const myRational& a) const;
    bool operator >(long value) const;

    bool operator >=(const myRational& a) const;
    bool operator >=(long value) const;

    bool operator ==(const myRational& a) const;
    bool operator ==(long value) const;

    bool operator !=(const myRational& a) const;
    bool operator !=(long value) const;

    myRational& operator =(const myRational& a);
    myRational& operator =(long value);

    myRational& operator +=(const myRational& a);
    myRational& operator +=(long value);

    myRational& operator -=(const myRational& a);
    myRational& operator -=(long value);

    myRational& operator *=(const myRational& a);
    myRational& operator *=(long value);

    myRational& operator /=(const myRational& a);
    myRational& operator /=(long value);

    friend std::ostream &operator<< (ostream &outStream, const myRational& r);
    friend std::istream &operator>> (istream &inStream, myRational& r); 


private:
 // ????????? ?????? ??????????????? ??????????????? ????????????, ?????? ?????? _den>0 ??????. 
    long _num; // numerator
    long _den; // denominator
    long gcd(long m, long n); // ???????????????
    void reduce();
};
#endif 