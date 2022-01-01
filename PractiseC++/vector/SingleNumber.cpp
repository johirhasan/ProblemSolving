// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int single = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        single ^= nums[i];//single = single ^ nums[i];compare two numbers.
        //The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers.
        //The result of XOR is 1 if the two bits are different.                     
    }
    return single;
}
int main()
{
    vector<int> nums;
    int i, element, size;
    cout << "Enter vector size: ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << "Enter element of your vector: ";
        cin >> element;
        nums.push_back(element);
    }
    cout << "The single number is : " << singleNumber(nums);
    return 0;
}