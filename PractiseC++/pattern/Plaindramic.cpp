//palindramic pattern
#include <iostream>
using namespace std;
int main()
{
    int i, j, k, m, n;
    cout<<"Enter a number between 3 & 9 : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (k = i; k >= 2; k--)
        {
            cout << k << " ";
        }
        for (m = 1; m <= i; m++)
        {
            cout << m << " ";
        }

        cout << "\n";
    }
    return 0;
}