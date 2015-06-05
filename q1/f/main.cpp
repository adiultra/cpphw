#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float vol, dm, h;
    vol = 1234.67;
    cout << "Calculating the diameter of sphere with volume 1234.67 cu meters" << endl;
    h = vol*(3.f/4.f)*(7.f/22.f);
    dm = 2 * cbrt(h);
    cout << "The diameter of sphere with volume 1234.67 cu meters is " << dm << endl;
    return 0;
}
