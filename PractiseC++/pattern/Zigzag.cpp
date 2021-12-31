#include <iostream>
using namespace std;
int main()
{
    int row, col, n;
    cout << "Enter a number between 5 & 73 : ";
    cin >> n;
    for (row = 1; row <= 3; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (((row + col) % 4 == 0) || (row == 2 && col % 4 == 0))
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    return 0;
}