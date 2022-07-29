#include <fstream>
#include <cstdlib>
#include "MyRational.h"
#include <vector>
#include <algorithm>
using namespace std;
void testSimpleCase();
void testDataFromFile();
int main()
{
 testSimpleCase();
 testDataFromFile();
}
void testSimpleCase()
{
    myRational frac1(2), frac2(3, 2), frac3(6, 4), frac4(12, 8), frac5, frac6, frac7;
    cout << frac1 << " " << frac2 << " " << frac3 << " " << frac4 << " " << frac5 << endl;
    cout << frac1.getNumerator() << " " << frac1.getDenominator() << endl;
    // Check arithmetic operators
    cout << frac1 * frac2 << " "<< frac1 + frac3 << " "<< frac2 - frac1 << " "<< frac3 / frac2 << endl;
    // Check comparison operator
    cout << ((frac1 < frac2) ? 1 : 0) << " "<< ((frac1 <= frac2) ? 1 : 0) << " " << ((frac1 > frac2) ? 1 : 0) << " " << ((frac1 >= frac2) ? 1 : 0) << " " << ((frac1 == frac2) ? 1 : 0) << " " << ((frac1 != frac2) ? 1 : 0) << " "
    << ((frac2 < frac3) ? 1 : 0) << " "<< ((frac2 <= frac3) ? 1 : 0) << " " << ((frac2 > frac3) ? 1 : 0) << " "<< ((frac2 >= frac3) ? 1 : 0) << " "<< ((frac2 == frac3) ? 1 : 0) << " " << ((frac2 != frac3) ? 1 : 0) << endl;
    cout << (frac6 = frac3) << " ";
    cout << (frac6 += frac3) << " ";
    cout << (frac6 -= frac3) << " ";
    cout << (frac6 *= frac3) << " ";
    cout << (frac6 /= frac3) << endl;
    cout << -frac6 << endl;
    frac6 = (++frac4) + 2;
    frac7 = 2 + (frac4++);
    cout << frac4 << " " << frac6 << " " << frac7 << endl;
    frac6 = (--frac4) - 2;
    frac7 = 2 - (frac4--);
    cout << frac4 << " " << frac6 << " " << frac7 << endl;
    cout << 2 * frac3 << " " << frac3 * 2 << " " << 2 / frac3 << " " << frac3 / 2 << endl;
}
void testDataFromFile()
{
    ifstream inStream;
    int numTestCases;
    inStream.open("input.txt");
    if (inStream.fail())
    {
        cerr << "Input file opening failed.\n";
        exit(1);
    }
   
    inStream >> numTestCases;
    for (int i=0; i<numTestCases; i++){
        vector<myRational> v;
        int t;
        inStream >> t;
        for(int j=0;j<t;j++){
            myRational r;
            inStream >> r;
            v.push_back(r);
        }
        sort(v.begin(),v.end());
            for(int k=0 ; k<v.size() ; k++){
                cout << v[k] << ' ';
        }
        cout << endl;
    }
    
    
    inStream.close();
} 