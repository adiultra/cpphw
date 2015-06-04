#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float vol, dm, h;
    vol = 1234.67;
    cout << "Calculating the diameter of sphere with volume 1234.67 cu meters" << endl;
    h = vol*(3/4)*(7/22);
    dm = 2 * cbrt(h);
    cout << "The diameter of sphere with volume 1234.67 cu meters is " << dm << endl;
    return 0;
}
