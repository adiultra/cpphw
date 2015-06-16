#include <iostream>

using namespace std;

int main() {
    int sub1, sub2, sub3, sub4, sub5, max;
    float percent;

    cout << "What's your marks " << endl;

    cout << "Subject 1 : ";
    cin >> sub1;

    cout << "Subject 2 : ";
    cin >> sub2;

    cout << "Subject 3 : ";
    cin >> sub3;

    cout << "Subject 4 : ";
    cin >> sub4;

    cout << "Subject 5 : ";
    cin >> sub5;


    cout << "From how many marks : ";
    cin >> max;

    percent = ( (sub1 + sub2 + sub3 + sub4 + sub5) / (5.0 * max) ) * 100.0;

    if (percent > 98.0){
        cout << "Either you surely are superhuman or a pretty bad lier " <<endl;
        cout << "Any ways your percent is " << percent << endl;
    }

    else if (percent > 90.0){
        cout << "Xtreme Good Marks " << endl;
        cout << "And your percent is " << percent << endl;
    }

    else if (percent > 80.0){
        cout << "Pretty Good Marks " << endl;
        cout << "And your percent is " << percent << endl;
    }

    else if (percent > 70.0){
        cout << "Good Marks " << endl;
        cout << "And your percent is " << percent << endl;
    }

    else if (percent > 60.0){
        cout << "Fine Marks " << endl;
        cout << "And your percent is " << percent << endl;
    }

    else if (percent > 50.0){
        cout << "Acceptable Marks " << endl;
        cout << "And your percent is " << percent << endl;
    }

    else if (percent > 40.0){
        cout << "You need to work hard " << endl;
        cout << "And your percent is " << percent << endl;
    }

    else if (percent > 33.0){
        cout << "It's a miracle you passed " << endl;
        cout << "And your percent is " << percent << endl;
    }

    else if (percent > 10.0){
        cout << "You need Serious Serious Improvement " << endl;
        cout << "And your percent is " << percent << endl;
    }


    else if (percent > 0.0){
        cout << "Congratulations You are in the top ten !!!" << endl;
        cout << endl << endl << endl << endl << endl << "From the back" << endl;
        cout << "And your percent is " << percent << endl;
    }

    else {
        cout << "Dude this is a education software not your fun tool!!!" << endl;
    }

    return 0;
}
