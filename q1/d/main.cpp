#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, k, l;
    cout << "Enter any five digit no. " << endl;
    cin >> n;
    k = n%10;
    l = n / 10000;
    cout << "The sum of cube of unit place digit and most significant digit is " << pow(k,3) + l << endl;

    return 0;
}
