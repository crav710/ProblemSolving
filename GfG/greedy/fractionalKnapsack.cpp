#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

struct ItemX{
    int value;
    int weight;
    double ratio;
};
bool comparator(ItemX a,ItemX b){
    return a.ratio>b.ratio;
}
class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        ItemX items[n];
        double maxV=0;
        for(int i=0;i<n;i++){
            double r=((double)arr[i].value/(double)arr[i].weight);
            items[i].value  = arr[i].value;
            items[i].weight = arr[i].weight;
            items[i].ratio  = r; 
        }
        sort(items,items+n,comparator);
        int remW=W;

        for(int i=0;i<n;i++){
            double actW = min(remW,items[i].weight);
            maxV=maxV+actW*items[i].ratio;
            remW=remW-actW;
            //cout<<actW<<" "<<maxV<<" "<<remW<<" "<<items[i].ratio<<endl;
            if(remW<0){
             break;   
            }
        }
        return maxV;
    }
        
};


// { Driver Code Starts.
int main()
{
    int t;
    //taking testcases
    cin>>t;
    cout<<setprecision(2)<<fixed;
    while(t--){
        //size of array and weight
        int n, W;
        cin>>n>>W;
        
        Item arr[n];
        //value and weight of each item
        for(int i=0;i<n;i++){
            cin>>arr[i].value>>arr[i].weight;
        }
        
        //function call
        Solution ob;
        cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends