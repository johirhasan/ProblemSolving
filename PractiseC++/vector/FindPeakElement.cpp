//  A peak element is an element that is strictly greater than its neighbors.
//  Given an integer array nums, find a peak element, and return its index.
//  If the array contains multiple peaks, return the index to any of the peaks.
#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1;
    while(start<end)
    {
        int mid = (start + end) / 2;
        if(nums[mid]>nums[mid+1])
        {
            end=mid;
        }
        else
        {
            start=mid + 1;
        }
    }
    return start;
}

int main()
{
    vector<int> nums;
    int i,element,size;
    cout<<"Enter vector size: ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter element of your vector: ";
        cin>>element;
        nums.push_back(element);
    }
    cout<<findPeakElement(nums);
    return 0;
}