#include <iostream>
using namespace std;

double g(double a, double b); 

int main()
{
    double s, t;

    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    
    double result = (g(1, s) + (1 + g(t, 1) * g(t, 1)) * (1 + g(t, 1) * g(t, 1))) / (1 + g(s + t, 1) * g(s + t, 1) * g(s + t, 1));

    cout << "Результат: " << result << endl;
    
    return 0;
}


double g(double a, double b)
{
    return a * a + a * b + b * b;
}
