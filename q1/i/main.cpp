#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float a, b;
    cout << "Enter two numbers " << endl;
    cin >> a >> b;

    cout << "Enter an operation ( +, -, /, *) " << endl;
    char c;
    cin >> c;

    if (c=='+'){
        float k = a + b;
        cout << "The Sum is " << k << endl;
    }

    else if (c=='-'){
        float k = a - b;
        cout << "The Difference is " << k << endl;
    }

    else if (c=='*'){
        float k = a * b;
        cout << "The product is " << k << endl;
    }

    else if (c=='/'){
        float k = a / b;
        cout << "The quotient is " << k << endl;
    }

    return 0;
}
