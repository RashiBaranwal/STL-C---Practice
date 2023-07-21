#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> s;
    map<int,int> m;
    for (int i = 0; i < (int)(1e6); i++)
    {
        // int x;
        // cin>>x;
        s.insert(rand());
    }
    for (int i = 0; i < (int)1e5; i++)
    {
        auto it = s.lower_bound(rand());
        // auto it = m.lower_bound(rand()); 
        //For maps only applied on keys
    }
    
}