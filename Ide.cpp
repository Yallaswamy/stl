#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool comp(const pair<int,int>&a,const pair<int,int>&b)
{
        return a.second<b.second;
}
int main()
{
    
    vector<int>A;
    A.push_back(10);
    A.push_back(20);
    A.push_back(30);
    A.push_back(40);
    
    //vector<int>B(100,-1);
    //different ways to run a lopp on vector
    /*
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
    */
    /*
    auto x=A.begin();
    auto y=A.end()-1;
    cout<<*x<<" "<<*y<<endl;
    auto x1=A.rbegin();
    auto y1=A.rend()-1;
    cout<<*x1<<" "<<*y1;
    */
    /*
    sort(A.begin(),A.end());//sort ascending
     for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" "<<endl;
    }
    sort(A.begin(),A.end(),greater<int>());//sort deseending
     for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
    */
    /*
    vector<vector<int>>grid(5,vector<int>(5,10));
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    grid.push_back({10,20,30,40,50});
     for(int i=0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    
    vector<string>st;
    st.push_back("swamy");
    */
    pair<int,int>p(10,20);
    vector<pair<int,int>>vp;
    vp.push_back({10,20});
    vp.push_back({1,19});
    vp.push_back({12,13});
    vp.push_back({10,12});
    
    sort(vp.begin(),vp.end());
    for(auto it:vp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    sort(vp.begin(),vp.end(),comp);
    for(auto it:vp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    
}