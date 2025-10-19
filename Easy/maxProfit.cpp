#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>&prices)
{
    int size=prices.size();
    int min;
    int min_index;
    min_index=0;
    min=prices[0];
    for(int i=1;i<prices.size();i++)
    {
        if(prices[i]<min)
        {
            min=prices[i];
            min_index=i;
        }
    }
    int max=min;
    for(int i=min_index+1;i<prices.size();i++)
    {   
        if(prices[i]>max)
        {
            max=prices[i];
        }
    }
    int profit=max-min;
    return profit;

}
int main()
{
    vector<int>prices;
    int size;
    cout<<"enter the size of array : "<<endl;
    cin>>size;
    cout<<"enter the element of the array: "<<endl;
    for(int i=0;i<size;i++)
    {
        int p;
        cin>>p;
        prices.push_back(p);
    }
    cout<<" the profit is : "<<maxProfit(prices);
}