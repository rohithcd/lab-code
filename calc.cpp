#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float l[10], t[10], r[10], s = 0, m, g;
    cout << "Enter number of trials\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "\n Enter value of length\n";
        cin >> l[i];
        cout << "Enter value of time period\n";
        cin >> t[i];
        r[i] = l[i] / t[i] * t[i];
        s = s + r[i];
    }
    m = s / n;
    g = 4 * 3.14 * 3.14 * m;
    cout << "Acceleration due to gravity, g=" << g << "ms^-2";
}
