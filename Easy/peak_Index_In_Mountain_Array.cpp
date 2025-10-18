#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int peakIndexInMountainArray(vector<int>&arr)
{
    int n=arr.size();
    int low=0;
    int high=arr.size()-1;
    while(low<high)
    {
        int mid=low+(high-low)/2;
  if(arr[mid] < arr[mid+1])
            low = mid + 1;
        else
            high = mid;
    }
    return low; 
}

int main()
{
    vector<int>arr;
    int size;
    cout<<"enter the size of the array ::  ";
    cin>>size;
    cout<<"enter the element of the array :: "<<endl;
    for(int i=0;i<size;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    cout<<peakIndexInMountainArray(arr);
}
