#include<iostream>
using namespace std;
int main()
{
    int n, row, col, spaces;
    cout<<"Enter a number between 3 & 48: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (spaces = 1; spaces <= n - row; spaces++)
        {
            cout << " ";
        }
        for (col = 1; col <= n; col++)
        {
            cout << " *";
        }
        cout << "\n";
    }

    return 0;
}