#include<iostream>
using namespace std;

void FizzBuzz(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i%15==0)
        {
            cout<<"FizzBuzz"<<" ";
        }
        else if (i%3==0)
        {
            cout<<"Fizz"<<" ";
        }
        else if (i%5==0)
        {
            cout<<"Buzz"<<" ";
        }
        else
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    FizzBuzz(num);
    return 0;
}