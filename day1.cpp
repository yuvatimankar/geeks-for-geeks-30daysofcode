#include<iostream>

using namespace std;

class Solution {
  public:
    void prank(long long a[], int n){
        // code here
        long long temp[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=a[a[i]];
        }
        for(int i=0;i<n;i++)
        {
            a[i]=temp[i];
        }
    }
};

int main()
{
    int n;
    cin>>n;

    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    Solution ob;
    ob.prank(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        cout<<endl;
        
    }

    return 0;
}
