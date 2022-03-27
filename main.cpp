#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b, m;
    cin >> a >> b;
    if (a > b){
        m = a;
    }
    else{
        m = b;
    }
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         << "max = " << m << '\n';
}
