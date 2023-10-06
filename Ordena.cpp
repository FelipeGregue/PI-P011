#include <iostream>

using namespace std;

void ordenaFloats(float &a, float &b, float &c, float &d) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (c > d) swap(c, d);
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
}

int main() {
    float a, b, c, d;

    cout << "Digite quatro números float: ";
    cin >> a >> b >> c >> d;

    ordenaFloats(a, b, c, d);

    cout << "Valores ordenados: " << a << ", " << b << ", " << c << ", " << d << endl;

    return 0;
}
