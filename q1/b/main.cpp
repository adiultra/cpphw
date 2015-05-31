#include <iostream>

using namespace std;

int main(){
    int a, yr, mnth, dys;
    cout << "Enter the age in days" << endl;
    cin >> a;
    yr = a/365;
    mnth = (a-yr*365)/30;
    dys = a - (yr*365+mnth*30);
    cout << "the Years are " << yr << endl;
    cout << "the Months are " << mnth << endl;
    cout << "the Days are " << dys << endl;
    return 0;
}
