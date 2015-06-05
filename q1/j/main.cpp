#include <iostream>
#include <math.h>
using namespace std;

int main(){

    double a, b, c;
    cout << "A quadratic equation is of the form aX^2 + bX + c " << endl;

    cout << "Enter the value of a " << endl;
    cin >> a;

    cout << "Enter the value of b " << endl;
    cin >> b;

    cout << "Enter the value of c " << endl;
    cin >> c;

    double d, r1, r2;
    d = pow(b, 2.0) - 4.0 * a * c;
    if (d>0){
        r1 = -(-b + pow(d, 1.0/2.0))/(2.0 * a);
        r2 = -(-b - pow(d, 1.0/2.0))/(2.0 * a);
        cout << "The 1st root is " << r1 << endl;
        cout << "The 2nd root is " << r2 << endl;
    }

    else if (d==0){
        r1 = -(-b + pow(d, 1.0/2.0))/(2.0 * a);
        cout << "The 1st and 2nd roots are equal and is " << r1 << endl;
    }

    else if (d<0){
        cout << "The roots are unreal and you can imagine them , Sweet dreams " << endl;
    }

    return 0;
}
