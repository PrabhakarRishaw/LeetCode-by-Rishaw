/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 */
#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>nums)
{
    int n=nums.size();
     for(int i=0; i<n; i++)
    {
        int count = 0;
        for(int j=0; j<n; j++)
        {
            if(nums[i] == nums[j])
                count++;
        }
        if(count >n/2)
            return nums[i];  
    }
    return -1;

}
int main()

{
    vector<int>nums;
    int size;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    cout<<"enter the element :  "<<endl;
    for(int i=0;i<size;i++)
    {
        int p;
        cin>>p;
        nums.push_back(p);
    }
    majorityElement(nums);
}