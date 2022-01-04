#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout<<"Enter a number between 3 & 60 : ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (col == 1 || col == n || row == 1 || row == n)
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