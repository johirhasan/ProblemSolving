#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<int> &nums, int k)
{
    k = k % nums.size();//k = k % nums.size();(Alternate way)
    reverse(nums.begin(), nums.end() - k); //std::rotate(nums.begin(),nums.end()-k,nums.end());
    reverse(nums.end() - k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main()
{
    vector<int> vec;
    int i, element, size, key;
    cout << "Enter vector size: ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << "Enter element of your vector: ";
        cin >> element;
        vec.push_back(element);
    }
    cout << "Enter the number for right shifting : ";
    cin >> key;
    rotateArray(vec, key);
    for(i = 0; i < size; i++)
    {
        cout <<vec[i]<<" ";
    }
    
    return 0;
}