#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>nums,int target)
{
    int index=-1;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==target)
        {
            index=i;
        }
    }
    return index;
}
int binarySearch(vector<int>nums,int target)
{
    int low=0;
    int high=nums.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[low]<=nums[mid])
        {
            if(target>=nums[low]&&target<nums[mid])
            {
                high=mid-1;
            }
            else
                low = mid + 1;
        }
         else {
            if (target > nums[mid] && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int>nums;
    int size;
    cout<<"enter the size of array : "<<endl;
    cin>>size;
    cout<<"enter the element of array "<<endl;
    for(int i=0;i<size;i++)
    {
        int p;
        cin>>p;
        nums.push_back(p);
    }
    int target;
    cout<<"enter the target element: ";
    cin>>target;
    cout<<" the index  is :  "<<search(nums,target);
}