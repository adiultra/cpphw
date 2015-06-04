#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Enter the numbers to find either of them are multiples of other or not " << endl;
    cin >> a >> b;

    if (a<b){
        c = b%a;
        if(c==0){
            cout << "The second number " << b << " is the multiple of the first number " << a << endl;
        }
        else if (!0){
            cout << "The second number " << b << " is not the multiple of the first number " << a << endl;
        }
        else {
        cout << "Do you know what are integers ;-) " << endl;
        }
    }

    else if (a>b){
        c = a%b;
        if(c==0){
            cout << "The first number " << a << " is the multiple of the second number " << b << endl;
        }
        else if (!0){
            cout << "The first number " << a << " is not the multiple of the second number " << b << endl;
        }
        else {
        cout << "Do you know what are integers ;-) " << endl;
        }
    }

    else if (a==b){
        cout << "dude i said different numbers, every number is a factor of itself " << endl;
    }

    return 0;
}
