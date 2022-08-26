#include<bits/stdc++.h>
using namespace std;

vector<float> MedianStream(int arr[],int n)
{
    priority_queue<int > s;  // creating a maxHeap
    priority_queue<int,vector<int>,greater<int>> g;  // creating a minHeap
    vector<float> v;

    s.push(arr[0]);
    v.push_back(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(s.size()>g.size())
        {
            if(s.top()>arr[i])
            {
                g.push(s.top());
                s.pop();
                s.push(arr[i]);
                v.push_back((s.top()+g.top())/2.0);
            }
            else{
                g.push(arr[i]);
                v.push_back((s.top()+g.top())/2.0);
            }
        }
        else
        {
            if(arr[i]<s.top())
            {
                s.push(arr[i]);
                v.push_back(s.top());
            }
            else{
                g.push(arr[i]);
                s.push(g.top());
                g.pop();
                v.push_back(s.top());
            }
        }
    }

    return v;

}

int main() 
{
   int arr[7]={12, 15, 10, 5, 8, 7, 16};
   vector<float> res = MedianStream(arr,7);
   cout<<"element     median"<<endl;
   for(int i=0;i<7;i++)
   {
       cout<<arr[i]<<"          "<<res[i]<<endl;
   }
   return 0;
}