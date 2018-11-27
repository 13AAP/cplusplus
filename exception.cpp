#include<iostream>
#include<conio.h>
using namespace std;
void main() {
    int a, b, c;
    float d;
    cout << "Enter the value of a:";
    cin>>a;
    cout << "Enter the value of c:";
    cin>>c;

    try {
        if (a!= 0) {
            d = c /a;
            cout << "Result is:" << d;
        } else {
            throw (a);
        }
    } catch (int i) {
        cout << "Answer is infinite because a is:" << i;
    }
}