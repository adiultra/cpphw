#include <iostream>

using namespace std;

int main(){
    int ag;
    cout << "Enter your age " << endl;
    cin >> ag;
    if (ag < 18 && ag > 0){
        cout << "You are a kid !!" << endl;
    }
    else if (ag < 65 && ag > 17){
        cout << "You are an adult !!" << endl;
    }
    else if (ag < 120 && ag > 64 ){
        cout << "You are a senior citizen !!" << endl;
    }
    else {
        cout << "You are not human :-(" << endl;
    }
    return 0;
}
