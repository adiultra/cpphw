#include <iostream>

using namespace std;

int main(){
    int a1, a2, h1, h2, kon;

    cout << "Enter the age, height of student 1 (respectively)" << endl;
    cin >> a1 >> h1;
    cout << "Enter the age, height of student 2 (respectively)" << endl;
    cin >> a2 >> h2;

    kon = a1;
    a1 = a2;
    a2 = kon;

    kon = h1;
    h1 = h2;
    h2 = kon;

    cout << "The age, height of student 1 (respectively) is " << a1 << " " << h1 << endl;
    cout << "The age, height of student 2 (respectively) is " << a2 << " " << h2 << endl;

    return 0;
}
