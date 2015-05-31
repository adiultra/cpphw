#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int p, r, t;
    double si, ci, x;
    cout << "Enter principle" << endl;
    cin >> p;
    cout << "Enter rate in %" << endl;
    cin >> r;
    cout << "Enter Time" << endl;
    cin >> t;
    si = (p*r*t)/100;
    cout << "The Simple Interest is: " << si <<endl;
    x = p*pow((1.0+r/100.0), t);
    ci = x - p;
    cout << "The Compound Interest is: " << ci << endl;
    return 0;
}
