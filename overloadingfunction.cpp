#include <iostream>
using namespace std;

int sum(int a, int b) 
{
    return a + b;
}
double sum(double a, double b) 
{
    return a + b;
}
int sum(int a, int b, int c) 
{
    return a + b + c;
}
int main() {
    int v1, v2, v3;
    double d1, d2;
    
    cin >> v1 >> v2;
    int r1 = sum(v1, v2);
    
    cin >> d1 >> d2;
    double r2 = sum(d1, d2);

    cin >> v1 >> v2 >> v3;
    int r3 = sum(v1, v2, v3);

    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;

    return 0;
}

