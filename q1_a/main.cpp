#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a, b, c;
    cout << "Enter the sides of the triangle " << endl;
    cin >> a >> b >> c;
    float s;
    double area;
    s = ((a+b+c)/2);
    cout << "the area is " << sqrt(s*(s-a)*(s-b)*(s-c)) << endl;

    return 0;
}
