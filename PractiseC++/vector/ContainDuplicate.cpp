// Given an integer array nums, return true.
// if any value appears at least twice in the array, and return false if every element is distinct.
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end()); //New STL function.
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return true;
        }
    }
    return false;
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
    if (containsDuplicate(nums))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}